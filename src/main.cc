/**
 * @author      <a href="mailto:michele.lora@univr.it">Michele Lora</a>
 * @date        2019
 *              This project is released under the 3-Clause BSD License.
 * */

#include "chase-core.hh"

#include <unistd.h>
#include <fstream>

#include "DSLSpecsBuilder.hh"
#include "backends/GR1CPrinter.hh"
#include "backends/SlugsPrinter.hh"

using namespace chase;
using namespace DSLFrontend;
/// @brief Structure saving all the input console parameters.
typedef struct _params
{
    /// @brief Input file path.
    std::string fileIn;
    /// @brief Output file path.
    std::string fileOut;
    /// @brief Backend choice.
    std::string backend; 
    /// @brief Verbose flag. Execution is verbose when flag is set to true.
    bool verbose;

    _params() :
        fileIn("chase_spec.txt"),
        fileOut(""),
        verbose(false)
    {
    }
} Params;

/// @brief Method parsing the input command line.
/// @param argc The number of parameters to parse.
/// @param argv The array of parameters.
/// @return A structure storing all the parameters sorted out.
Params * parseCmdLine( int argc, char * argv[] );

/// @brief Method printing usage banner of the tool.
void printHelp();


int main( int argc, char * argv[] )
{
    Params * parameters = parseCmdLine(argc, argv);

    if(parameters == nullptr) return -1;

    // Start parsing the input file.
    DSLSpecsBuilder builder;
    builder.parseSpecificationFile(parameters->fileIn);
    Contract * c = builder.getProblem()->getContract();

    if( parameters->verbose == true )
        std::cout << c->getString() << std::endl << std::endl;

    if( parameters->backend == "gr1c" )
    {
        std::string fileOut = parameters->fileOut;
        if (fileOut.find(".spc") == std::string::npos)
            fileOut += ".spc";
        GR1CPrinter printer;
        printer.print(c, fileOut);
        messageInfo("GR1C specification written in " + fileOut);
    }
    else if( parameters->backend == "slugs" )
    {
        std::string fileOut = parameters->fileOut;
        if (parameters->fileOut.find("structuredSlugs") == std::string::npos)
            fileOut += ".structuredSlugs";
        SlugsPrinter printer;
        printer.print(c, fileOut);
        messageInfo("SLUGS specification written in " + fileOut);
    }

    delete(c);
    return 0;
}



void printHelp()
{
    std::cerr << "[USAGE]\n" <<
        "patternsToNetworks -i input_file [-o output_file] [-b backend] [-V]"
        << std::endl <<
        std::endl <<
        "\t-i : specifies the txt input file containing the specifications."
        << std::endl <<
        "\t-o : specifies the txt output file. Default: input file with .structuredslugs"
        "\n\t\trather than .txt extension." << std::endl <<
        "\t-b : specifies the backend to be used. Default: slugs." <<
        "\n\t\tLegal values: gr1c, slugs" << std::endl <<
        "\t-V : activate the verbose mode." << std::endl;
}

Params * parseCmdLine(int argc, char * argv[] ) {
    auto *parameters = new Params();

    opterr = 0;
    int c;

    while ((c = getopt(argc, argv, "i:o:b:V")) != -1) {
        switch (c) {
            case 'i':
                parameters->fileIn = std::string(optarg);
                break;
            case 'o':
                parameters->fileOut = std::string(optarg);
                break;
            case 'b':
                parameters->backend = std::string(optarg);
                break;
            case '?':
                printHelp();
                exit(-1);
            case 'V':
                parameters->verbose = true;
                break;
            default:
                printHelp();
                exit(-1);
        }
    }

    if (parameters->backend.empty())
    {
        parameters->backend = "slugs";
    }
    else if (parameters->backend != "slugs" && parameters->backend != "gr1c")
    {
        printHelp();
        exit(-1);
    }

    if( parameters->fileOut.empty() )
    {
        size_t lastindex = parameters->fileIn.find_last_of('.');
        size_t firstindex = parameters->fileIn.find_last_of('/');
        if( firstindex > 0 ) ++firstindex;
        std::string rawname = parameters->fileIn.substr(firstindex, lastindex-firstindex);

        parameters->fileOut = rawname;
    }


    std::ifstream f(parameters->fileIn.c_str());
    if( ! f.good() )
    {
        printHelp();
        f.close();
        std::cout << "fileIn: " << parameters->fileIn.c_str() << std::endl;
        exit(-1);
    }
    f.close();
    return parameters;
}


