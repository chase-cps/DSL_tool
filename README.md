# CHASE DSL tool

The tool takes as input a problem specification expressed using the Domain
Specific Language (DSL) of CHASE, and encodes it for a GR(1) synthesis tool,
either [slugs][SLUGS] or [gr1c][GR1C]. The synthesis tool is then used to check
the realizability of the specification and to synthesize a controller.

The DSL allows specifying a set of requirements about the system behavior over
an architecture represented by a network of components. The grammar of the
language is in `grammar/Chase.g4`. Some examples are available in the
[demos][DEMOS] repository (`DATE18`, `DATE21`, and `FDL2024` directories).

>**Usage**
>
> `dsl_tool -i input_file.txt [-o output_file] [-b backend] [-V]`

> **Parameters:**
>
> - -i _Specifies the `.txt` input file containing the specification._
> - -o _Specifies the output file._
> - -b _Specifies the backend to be used. It may either be: `slugs` (default value) or `gr1c`._
> - -V _Enables verbose mode._

For instance, from the main directory of the demos repository:

`$> dsl_tool -i DATE21/specs/template_0_unrealizable.txt -o /tmp/template_0 -b gr1c`

`$> gr1c -r /tmp/template_0.spc`

The tool is also available as a Python module (`pychase_DSL`). It requires the
[core-library][CORE], the [chase-backends][BACKENDS], and the ANTLR4 runtime
provided in the [third_party][THIRD_PARTY] repository. For the installation,
please refer to the [CHASE website][WEB].

## License

This project is released under the 3-Clause BSD License.

[SLUGS]: https://github.com/VerifiableRobotics/slugs
[GR1C]: https://github.com/tulip-control/gr1c
[DEMOS]: https://github.com/chase-cps/demos
[CORE]: https://github.com/chase-cps/core-library
[BACKENDS]: https://github.com/chase-cps/chase-backends
[THIRD_PARTY]: https://github.com/chase-cps/third_party
[WEB]: https://chase-cps.github.io/doc/md/install.html
