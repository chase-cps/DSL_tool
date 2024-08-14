
// Generated from Chase.g4 by ANTLR 4.9


#include "ChaseListener.h"

#include "ChaseParser.h"


using namespace antlrcpp;
using namespace antlr4;

ChaseParser::ChaseParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ChaseParser::~ChaseParser() {
  delete _interpreter;
}

std::string ChaseParser::getGrammarFileName() const {
  return "Chase.g4";
}

const std::vector<std::string>& ChaseParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ChaseParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ChaseSpecContext ------------------------------------------------------------------

ChaseParser::ChaseSpecContext::ChaseSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ChaseParser::TypesContext* ChaseParser::ChaseSpecContext::types() {
  return getRuleContext<ChaseParser::TypesContext>(0);
}

ChaseParser::ComponentsContext* ChaseParser::ChaseSpecContext::components() {
  return getRuleContext<ChaseParser::ComponentsContext>(0);
}

ChaseParser::ConnectionsContext* ChaseParser::ChaseSpecContext::connections() {
  return getRuleContext<ChaseParser::ConnectionsContext>(0);
}

ChaseParser::RequirementsContext* ChaseParser::ChaseSpecContext::requirements() {
  return getRuleContext<ChaseParser::RequirementsContext>(0);
}

tree::TerminalNode* ChaseParser::ChaseSpecContext::EOF() {
  return getToken(ChaseParser::EOF, 0);
}

ChaseParser::AbbreviationsContext* ChaseParser::ChaseSpecContext::abbreviations() {
  return getRuleContext<ChaseParser::AbbreviationsContext>(0);
}

ChaseParser::AssumptionsContext* ChaseParser::ChaseSpecContext::assumptions() {
  return getRuleContext<ChaseParser::AssumptionsContext>(0);
}


size_t ChaseParser::ChaseSpecContext::getRuleIndex() const {
  return ChaseParser::RuleChaseSpec;
}

void ChaseParser::ChaseSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChaseSpec(this);
}

void ChaseParser::ChaseSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChaseSpec(this);
}

ChaseParser::ChaseSpecContext* ChaseParser::chaseSpec() {
  ChaseSpecContext *_localctx = _tracker.createInstance<ChaseSpecContext>(_ctx, getState());
  enterRule(_localctx, 0, ChaseParser::RuleChaseSpec);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    types();
    setState(55);
    components();
    setState(57);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ChaseParser::T__11) {
      setState(56);
      abbreviations();
    }
    setState(59);
    connections();
    setState(60);
    requirements();
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ChaseParser::T__14) {
      setState(61);
      assumptions();
    }
    setState(64);
    match(ChaseParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypesContext ------------------------------------------------------------------

ChaseParser::TypesContext::TypesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ChaseParser::TypesKWContext* ChaseParser::TypesContext::typesKW() {
  return getRuleContext<ChaseParser::TypesKWContext>(0);
}

std::vector<ChaseParser::TypeContext *> ChaseParser::TypesContext::type() {
  return getRuleContexts<ChaseParser::TypeContext>();
}

ChaseParser::TypeContext* ChaseParser::TypesContext::type(size_t i) {
  return getRuleContext<ChaseParser::TypeContext>(i);
}


size_t ChaseParser::TypesContext::getRuleIndex() const {
  return ChaseParser::RuleTypes;
}

void ChaseParser::TypesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypes(this);
}

void ChaseParser::TypesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypes(this);
}

ChaseParser::TypesContext* ChaseParser::types() {
  TypesContext *_localctx = _tracker.createInstance<TypesContext>(_ctx, getState());
  enterRule(_localctx, 2, ChaseParser::RuleTypes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    typesKW();
    setState(68); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(67);
      type();
      setState(70); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ChaseParser::ID

    || _la == ChaseParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ChaseParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ChaseParser::TypeContext::ENDST() {
  return getToken(ChaseParser::ENDST, 0);
}

ChaseParser::NameContext* ChaseParser::TypeContext::name() {
  return getRuleContext<ChaseParser::NameContext>(0);
}

std::vector<tree::TerminalNode *> ChaseParser::TypeContext::ID() {
  return getTokens(ChaseParser::ID);
}

tree::TerminalNode* ChaseParser::TypeContext::ID(size_t i) {
  return getToken(ChaseParser::ID, i);
}


size_t ChaseParser::TypeContext::getRuleIndex() const {
  return ChaseParser::RuleType;
}

void ChaseParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void ChaseParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

ChaseParser::TypeContext* ChaseParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 4, ChaseParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    dynamic_cast<TypeContext *>(_localctx)->nam = name();
    setState(73);
    match(ChaseParser::T__0);
    setState(74);
    dynamic_cast<TypeContext *>(_localctx)->typ = match(ChaseParser::ID);
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ChaseParser::T__1) {
      setState(75);
      match(ChaseParser::T__1);
      setState(76);
      dynamic_cast<TypeContext *>(_localctx)->idToken = match(ChaseParser::ID);
      dynamic_cast<TypeContext *>(_localctx)->par.push_back(dynamic_cast<TypeContext *>(_localctx)->idToken);
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ChaseParser::T__2) {
        setState(77);
        match(ChaseParser::T__2);
        setState(78);
        dynamic_cast<TypeContext *>(_localctx)->idToken = match(ChaseParser::ID);
        dynamic_cast<TypeContext *>(_localctx)->par.push_back(dynamic_cast<TypeContext *>(_localctx)->idToken);
        setState(83);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(84);
      match(ChaseParser::T__3);
    }
    setState(87);
    match(ChaseParser::ENDST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentsContext ------------------------------------------------------------------

ChaseParser::ComponentsContext::ComponentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ChaseParser::ComponentsKWContext* ChaseParser::ComponentsContext::componentsKW() {
  return getRuleContext<ChaseParser::ComponentsKWContext>(0);
}

std::vector<ChaseParser::ComponentContext *> ChaseParser::ComponentsContext::component() {
  return getRuleContexts<ChaseParser::ComponentContext>();
}

ChaseParser::ComponentContext* ChaseParser::ComponentsContext::component(size_t i) {
  return getRuleContext<ChaseParser::ComponentContext>(i);
}


size_t ChaseParser::ComponentsContext::getRuleIndex() const {
  return ChaseParser::RuleComponents;
}

void ChaseParser::ComponentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponents(this);
}

void ChaseParser::ComponentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponents(this);
}

ChaseParser::ComponentsContext* ChaseParser::components() {
  ComponentsContext *_localctx = _tracker.createInstance<ComponentsContext>(_ctx, getState());
  enterRule(_localctx, 6, ChaseParser::RuleComponents);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    componentsKW();
    setState(91); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(90);
      component();
      setState(93); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ChaseParser::ID

    || _la == ChaseParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentContext ------------------------------------------------------------------

ChaseParser::ComponentContext::ComponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ChaseParser::ComponentContext::ENDST() {
  return getToken(ChaseParser::ENDST, 0);
}

ChaseParser::NameContext* ChaseParser::ComponentContext::name() {
  return getRuleContext<ChaseParser::NameContext>(0);
}

tree::TerminalNode* ChaseParser::ComponentContext::NUMBER() {
  return getToken(ChaseParser::NUMBER, 0);
}


size_t ChaseParser::ComponentContext::getRuleIndex() const {
  return ChaseParser::RuleComponent;
}

void ChaseParser::ComponentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent(this);
}

void ChaseParser::ComponentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent(this);
}

ChaseParser::ComponentContext* ChaseParser::component() {
  ComponentContext *_localctx = _tracker.createInstance<ComponentContext>(_ctx, getState());
  enterRule(_localctx, 8, ChaseParser::RuleComponent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    dynamic_cast<ComponentContext *>(_localctx)->nam = name();
    setState(96);
    match(ChaseParser::T__0);
    setState(99);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ChaseParser::NUMBER: {
        setState(97);
        dynamic_cast<ComponentContext *>(_localctx)->num = match(ChaseParser::NUMBER);
        break;
      }

      case ChaseParser::T__4: {
        setState(98);
        match(ChaseParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(101);
    match(ChaseParser::ENDST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

ChaseParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ChaseParser::NameContext::ID() {
  return getTokens(ChaseParser::ID);
}

tree::TerminalNode* ChaseParser::NameContext::ID(size_t i) {
  return getToken(ChaseParser::ID, i);
}

tree::TerminalNode* ChaseParser::NameContext::NUMBER() {
  return getToken(ChaseParser::NUMBER, 0);
}


size_t ChaseParser::NameContext::getRuleIndex() const {
  return ChaseParser::RuleName;
}

void ChaseParser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void ChaseParser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}

ChaseParser::NameContext* ChaseParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 10, ChaseParser::RuleName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(117);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ChaseParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(104); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(103);
          dynamic_cast<NameContext *>(_localctx)->idToken = match(ChaseParser::ID);
          dynamic_cast<NameContext *>(_localctx)->comp.push_back(dynamic_cast<NameContext *>(_localctx)->idToken);
          setState(106); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ChaseParser::ID);
        setState(109);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ChaseParser::NUMBER) {
          setState(108);
          dynamic_cast<NameContext *>(_localctx)->num = match(ChaseParser::NUMBER);
        }
        break;
      }

      case ChaseParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(111);
        dynamic_cast<NameContext *>(_localctx)->num = match(ChaseParser::NUMBER);
        setState(113); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(112);
          dynamic_cast<NameContext *>(_localctx)->idToken = match(ChaseParser::ID);
          dynamic_cast<NameContext *>(_localctx)->comp.push_back(dynamic_cast<NameContext *>(_localctx)->idToken);
          setState(115); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ChaseParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbbreviationsContext ------------------------------------------------------------------

ChaseParser::AbbreviationsContext::AbbreviationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ChaseParser::AbbreviationsKWContext* ChaseParser::AbbreviationsContext::abbreviationsKW() {
  return getRuleContext<ChaseParser::AbbreviationsKWContext>(0);
}

std::vector<ChaseParser::AbbrevContext *> ChaseParser::AbbreviationsContext::abbrev() {
  return getRuleContexts<ChaseParser::AbbrevContext>();
}

ChaseParser::AbbrevContext* ChaseParser::AbbreviationsContext::abbrev(size_t i) {
  return getRuleContext<ChaseParser::AbbrevContext>(i);
}


size_t ChaseParser::AbbreviationsContext::getRuleIndex() const {
  return ChaseParser::RuleAbbreviations;
}

void ChaseParser::AbbreviationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbbreviations(this);
}

void ChaseParser::AbbreviationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbbreviations(this);
}

ChaseParser::AbbreviationsContext* ChaseParser::abbreviations() {
  AbbreviationsContext *_localctx = _tracker.createInstance<AbbreviationsContext>(_ctx, getState());
  enterRule(_localctx, 12, ChaseParser::RuleAbbreviations);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    abbreviationsKW();
    setState(121); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(120);
      abbrev();
      setState(123); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ChaseParser::ID

    || _la == ChaseParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbbrevContext ------------------------------------------------------------------

ChaseParser::AbbrevContext::AbbrevContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ChaseParser::AbbrevContext::ENDST() {
  return getToken(ChaseParser::ENDST, 0);
}

ChaseParser::NameContext* ChaseParser::AbbrevContext::name() {
  return getRuleContext<ChaseParser::NameContext>(0);
}

tree::TerminalNode* ChaseParser::AbbrevContext::ID() {
  return getToken(ChaseParser::ID, 0);
}


size_t ChaseParser::AbbrevContext::getRuleIndex() const {
  return ChaseParser::RuleAbbrev;
}

void ChaseParser::AbbrevContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbbrev(this);
}

void ChaseParser::AbbrevContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbbrev(this);
}

ChaseParser::AbbrevContext* ChaseParser::abbrev() {
  AbbrevContext *_localctx = _tracker.createInstance<AbbrevContext>(_ctx, getState());
  enterRule(_localctx, 14, ChaseParser::RuleAbbrev);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    dynamic_cast<AbbrevContext *>(_localctx)->nam = name();
    setState(126);
    match(ChaseParser::T__0);
    setState(127);
    dynamic_cast<AbbrevContext *>(_localctx)->abbr = match(ChaseParser::ID);
    setState(128);
    match(ChaseParser::ENDST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConnectionsContext ------------------------------------------------------------------

ChaseParser::ConnectionsContext::ConnectionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ChaseParser::ConnectionsKWContext* ChaseParser::ConnectionsContext::connectionsKW() {
  return getRuleContext<ChaseParser::ConnectionsKWContext>(0);
}

std::vector<ChaseParser::ConnContext *> ChaseParser::ConnectionsContext::conn() {
  return getRuleContexts<ChaseParser::ConnContext>();
}

ChaseParser::ConnContext* ChaseParser::ConnectionsContext::conn(size_t i) {
  return getRuleContext<ChaseParser::ConnContext>(i);
}

std::vector<ChaseParser::SwitchedContext *> ChaseParser::ConnectionsContext::switched() {
  return getRuleContexts<ChaseParser::SwitchedContext>();
}

ChaseParser::SwitchedContext* ChaseParser::ConnectionsContext::switched(size_t i) {
  return getRuleContext<ChaseParser::SwitchedContext>(i);
}

std::vector<ChaseParser::UnswitchedContext *> ChaseParser::ConnectionsContext::unswitched() {
  return getRuleContexts<ChaseParser::UnswitchedContext>();
}

ChaseParser::UnswitchedContext* ChaseParser::ConnectionsContext::unswitched(size_t i) {
  return getRuleContext<ChaseParser::UnswitchedContext>(i);
}


size_t ChaseParser::ConnectionsContext::getRuleIndex() const {
  return ChaseParser::RuleConnections;
}

void ChaseParser::ConnectionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConnections(this);
}

void ChaseParser::ConnectionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConnections(this);
}

ChaseParser::ConnectionsContext* ChaseParser::connections() {
  ConnectionsContext *_localctx = _tracker.createInstance<ConnectionsContext>(_ctx, getState());
  enterRule(_localctx, 16, ChaseParser::RuleConnections);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    connectionsKW();
    setState(134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ChaseParser::ID

    || _la == ChaseParser::NUMBER) {
      setState(131);
      conn();
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(148);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ChaseParser::T__15

    || _la == ChaseParser::T__16) {
      setState(139);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ChaseParser::T__15: {
          setState(137);
          switched();
          break;
        }

        case ChaseParser::T__16: {
          setState(138);
          unswitched();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(142); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(141);
        conn();
        setState(144); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == ChaseParser::ID

      || _la == ChaseParser::NUMBER);
      setState(150);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchedContext ------------------------------------------------------------------

ChaseParser::SwitchedContext::SwitchedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ChaseParser::SwitchedKWContext* ChaseParser::SwitchedContext::switchedKW() {
  return getRuleContext<ChaseParser::SwitchedKWContext>(0);
}

ChaseParser::NameContext* ChaseParser::SwitchedContext::name() {
  return getRuleContext<ChaseParser::NameContext>(0);
}


size_t ChaseParser::SwitchedContext::getRuleIndex() const {
  return ChaseParser::RuleSwitched;
}

void ChaseParser::SwitchedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitched(this);
}

void ChaseParser::SwitchedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitched(this);
}

ChaseParser::SwitchedContext* ChaseParser::switched() {
  SwitchedContext *_localctx = _tracker.createInstance<SwitchedContext>(_ctx, getState());
  enterRule(_localctx, 18, ChaseParser::RuleSwitched);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    switchedKW();
    setState(152);
    match(ChaseParser::T__1);
    setState(153);
    dynamic_cast<SwitchedContext *>(_localctx)->sw = name();
    setState(154);
    match(ChaseParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnswitchedContext ------------------------------------------------------------------

ChaseParser::UnswitchedContext::UnswitchedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ChaseParser::UnswitchedKWContext* ChaseParser::UnswitchedContext::unswitchedKW() {
  return getRuleContext<ChaseParser::UnswitchedKWContext>(0);
}


size_t ChaseParser::UnswitchedContext::getRuleIndex() const {
  return ChaseParser::RuleUnswitched;
}

void ChaseParser::UnswitchedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnswitched(this);
}

void ChaseParser::UnswitchedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnswitched(this);
}

ChaseParser::UnswitchedContext* ChaseParser::unswitched() {
  UnswitchedContext *_localctx = _tracker.createInstance<UnswitchedContext>(_ctx, getState());
  enterRule(_localctx, 20, ChaseParser::RuleUnswitched);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    unswitchedKW();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Undirected_connContext ------------------------------------------------------------------

ChaseParser::Undirected_connContext::Undirected_connContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ChaseParser::Undirected_connContext::ENDST() {
  return getToken(ChaseParser::ENDST, 0);
}

std::vector<ChaseParser::NameContext *> ChaseParser::Undirected_connContext::name() {
  return getRuleContexts<ChaseParser::NameContext>();
}

ChaseParser::NameContext* ChaseParser::Undirected_connContext::name(size_t i) {
  return getRuleContext<ChaseParser::NameContext>(i);
}


size_t ChaseParser::Undirected_connContext::getRuleIndex() const {
  return ChaseParser::RuleUndirected_conn;
}

void ChaseParser::Undirected_connContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUndirected_conn(this);
}

void ChaseParser::Undirected_connContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUndirected_conn(this);
}

ChaseParser::Undirected_connContext* ChaseParser::undirected_conn() {
  Undirected_connContext *_localctx = _tracker.createInstance<Undirected_connContext>(_ctx, getState());
  enterRule(_localctx, 22, ChaseParser::RuleUndirected_conn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    dynamic_cast<Undirected_connContext *>(_localctx)->from = name();
    setState(166);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ChaseParser::T__5: {
        setState(159);
        match(ChaseParser::T__5);
        break;
      }

      case ChaseParser::T__6: {
        setState(160);
        match(ChaseParser::T__6);
        setState(161);
        match(ChaseParser::T__1);
        setState(162);
        dynamic_cast<Undirected_connContext *>(_localctx)->sw = name();
        setState(163);
        match(ChaseParser::T__3);
        setState(164);
        match(ChaseParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(168);
    dynamic_cast<Undirected_connContext *>(_localctx)->to = name();
    setState(169);
    match(ChaseParser::ENDST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Directed_connContext ------------------------------------------------------------------

ChaseParser::Directed_connContext::Directed_connContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ChaseParser::Directed_connContext::ENDST() {
  return getToken(ChaseParser::ENDST, 0);
}

std::vector<ChaseParser::NameContext *> ChaseParser::Directed_connContext::name() {
  return getRuleContexts<ChaseParser::NameContext>();
}

ChaseParser::NameContext* ChaseParser::Directed_connContext::name(size_t i) {
  return getRuleContext<ChaseParser::NameContext>(i);
}


size_t ChaseParser::Directed_connContext::getRuleIndex() const {
  return ChaseParser::RuleDirected_conn;
}

void ChaseParser::Directed_connContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirected_conn(this);
}

void ChaseParser::Directed_connContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirected_conn(this);
}

ChaseParser::Directed_connContext* ChaseParser::directed_conn() {
  Directed_connContext *_localctx = _tracker.createInstance<Directed_connContext>(_ctx, getState());
  enterRule(_localctx, 24, ChaseParser::RuleDirected_conn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    dynamic_cast<Directed_connContext *>(_localctx)->from = name();
    setState(179);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ChaseParser::T__7: {
        setState(172);
        match(ChaseParser::T__7);
        break;
      }

      case ChaseParser::T__6: {
        setState(173);
        match(ChaseParser::T__6);
        setState(174);
        match(ChaseParser::T__1);
        setState(175);
        dynamic_cast<Directed_connContext *>(_localctx)->sw = name();
        setState(176);
        match(ChaseParser::T__3);
        setState(177);
        match(ChaseParser::T__8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(181);
    dynamic_cast<Directed_connContext *>(_localctx)->to = name();
    setState(182);
    match(ChaseParser::ENDST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConnContext ------------------------------------------------------------------

ChaseParser::ConnContext::ConnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ChaseParser::Directed_connContext* ChaseParser::ConnContext::directed_conn() {
  return getRuleContext<ChaseParser::Directed_connContext>(0);
}

ChaseParser::Undirected_connContext* ChaseParser::ConnContext::undirected_conn() {
  return getRuleContext<ChaseParser::Undirected_connContext>(0);
}


size_t ChaseParser::ConnContext::getRuleIndex() const {
  return ChaseParser::RuleConn;
}

void ChaseParser::ConnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConn(this);
}

void ChaseParser::ConnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConn(this);
}

ChaseParser::ConnContext* ChaseParser::conn() {
  ConnContext *_localctx = _tracker.createInstance<ConnContext>(_ctx, getState());
  enterRule(_localctx, 26, ChaseParser::RuleConn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(186);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(184);
      directed_conn();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(185);
      undirected_conn();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RequirementsContext ------------------------------------------------------------------

ChaseParser::RequirementsContext::RequirementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ChaseParser::RequirementsKWContext* ChaseParser::RequirementsContext::requirementsKW() {
  return getRuleContext<ChaseParser::RequirementsKWContext>(0);
}

std::vector<ChaseParser::ReqContext *> ChaseParser::RequirementsContext::req() {
  return getRuleContexts<ChaseParser::ReqContext>();
}

ChaseParser::ReqContext* ChaseParser::RequirementsContext::req(size_t i) {
  return getRuleContext<ChaseParser::ReqContext>(i);
}


size_t ChaseParser::RequirementsContext::getRuleIndex() const {
  return ChaseParser::RuleRequirements;
}

void ChaseParser::RequirementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequirements(this);
}

void ChaseParser::RequirementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequirements(this);
}

ChaseParser::RequirementsContext* ChaseParser::requirements() {
  RequirementsContext *_localctx = _tracker.createInstance<RequirementsContext>(_ctx, getState());
  enterRule(_localctx, 28, ChaseParser::RuleRequirements);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    requirementsKW();
    setState(190); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(189);
      req();
      setState(192); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ChaseParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReqContext ------------------------------------------------------------------

ChaseParser::ReqContext::ReqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ChaseParser::ReqContext::ENDST() {
  return getToken(ChaseParser::ENDST, 0);
}

tree::TerminalNode* ChaseParser::ReqContext::ID() {
  return getToken(ChaseParser::ID, 0);
}

std::vector<ChaseParser::ParamContext *> ChaseParser::ReqContext::param() {
  return getRuleContexts<ChaseParser::ParamContext>();
}

ChaseParser::ParamContext* ChaseParser::ReqContext::param(size_t i) {
  return getRuleContext<ChaseParser::ParamContext>(i);
}


size_t ChaseParser::ReqContext::getRuleIndex() const {
  return ChaseParser::RuleReq;
}

void ChaseParser::ReqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReq(this);
}

void ChaseParser::ReqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReq(this);
}

ChaseParser::ReqContext* ChaseParser::req() {
  ReqContext *_localctx = _tracker.createInstance<ReqContext>(_ctx, getState());
  enterRule(_localctx, 30, ChaseParser::RuleReq);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    dynamic_cast<ReqContext *>(_localctx)->pred = match(ChaseParser::ID);
    setState(195);
    match(ChaseParser::T__1);
    setState(196);
    dynamic_cast<ReqContext *>(_localctx)->paramContext = param();
    dynamic_cast<ReqContext *>(_localctx)->par.push_back(dynamic_cast<ReqContext *>(_localctx)->paramContext);
    setState(201);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ChaseParser::T__2) {
      setState(197);
      match(ChaseParser::T__2);
      setState(198);
      dynamic_cast<ReqContext *>(_localctx)->paramContext = param();
      dynamic_cast<ReqContext *>(_localctx)->par.push_back(dynamic_cast<ReqContext *>(_localctx)->paramContext);
      setState(203);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(204);
    match(ChaseParser::T__3);
    setState(205);
    match(ChaseParser::ENDST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

ChaseParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ChaseParser::NameContext* ChaseParser::ParamContext::name() {
  return getRuleContext<ChaseParser::NameContext>(0);
}

tree::TerminalNode* ChaseParser::ParamContext::NUMBER() {
  return getToken(ChaseParser::NUMBER, 0);
}


size_t ChaseParser::ParamContext::getRuleIndex() const {
  return ChaseParser::RuleParam;
}

void ChaseParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void ChaseParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}

ChaseParser::ParamContext* ChaseParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 32, ChaseParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(209);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(207);
      dynamic_cast<ParamContext *>(_localctx)->nam = name();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(208);
      dynamic_cast<ParamContext *>(_localctx)->num = match(ChaseParser::NUMBER);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssumptionsContext ------------------------------------------------------------------

ChaseParser::AssumptionsContext::AssumptionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ChaseParser::AssumptionsKWContext* ChaseParser::AssumptionsContext::assumptionsKW() {
  return getRuleContext<ChaseParser::AssumptionsKWContext>(0);
}

std::vector<ChaseParser::AssumContext *> ChaseParser::AssumptionsContext::assum() {
  return getRuleContexts<ChaseParser::AssumContext>();
}

ChaseParser::AssumContext* ChaseParser::AssumptionsContext::assum(size_t i) {
  return getRuleContext<ChaseParser::AssumContext>(i);
}


size_t ChaseParser::AssumptionsContext::getRuleIndex() const {
  return ChaseParser::RuleAssumptions;
}

void ChaseParser::AssumptionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssumptions(this);
}

void ChaseParser::AssumptionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssumptions(this);
}

ChaseParser::AssumptionsContext* ChaseParser::assumptions() {
  AssumptionsContext *_localctx = _tracker.createInstance<AssumptionsContext>(_ctx, getState());
  enterRule(_localctx, 34, ChaseParser::RuleAssumptions);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    assumptionsKW();
    setState(213); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(212);
      assum();
      setState(215); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ChaseParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssumContext ------------------------------------------------------------------

ChaseParser::AssumContext::AssumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ChaseParser::ReqContext* ChaseParser::AssumContext::req() {
  return getRuleContext<ChaseParser::ReqContext>(0);
}


size_t ChaseParser::AssumContext::getRuleIndex() const {
  return ChaseParser::RuleAssum;
}

void ChaseParser::AssumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssum(this);
}

void ChaseParser::AssumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssum(this);
}

ChaseParser::AssumContext* ChaseParser::assum() {
  AssumContext *_localctx = _tracker.createInstance<AssumContext>(_ctx, getState());
  enterRule(_localctx, 36, ChaseParser::RuleAssum);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    req();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypesKWContext ------------------------------------------------------------------

ChaseParser::TypesKWContext::TypesKWContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ChaseParser::TypesKWContext::getRuleIndex() const {
  return ChaseParser::RuleTypesKW;
}

void ChaseParser::TypesKWContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypesKW(this);
}

void ChaseParser::TypesKWContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypesKW(this);
}

ChaseParser::TypesKWContext* ChaseParser::typesKW() {
  TypesKWContext *_localctx = _tracker.createInstance<TypesKWContext>(_ctx, getState());
  enterRule(_localctx, 38, ChaseParser::RuleTypesKW);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    match(ChaseParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentsKWContext ------------------------------------------------------------------

ChaseParser::ComponentsKWContext::ComponentsKWContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ChaseParser::ComponentsKWContext::getRuleIndex() const {
  return ChaseParser::RuleComponentsKW;
}

void ChaseParser::ComponentsKWContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponentsKW(this);
}

void ChaseParser::ComponentsKWContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponentsKW(this);
}

ChaseParser::ComponentsKWContext* ChaseParser::componentsKW() {
  ComponentsKWContext *_localctx = _tracker.createInstance<ComponentsKWContext>(_ctx, getState());
  enterRule(_localctx, 40, ChaseParser::RuleComponentsKW);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    match(ChaseParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbbreviationsKWContext ------------------------------------------------------------------

ChaseParser::AbbreviationsKWContext::AbbreviationsKWContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ChaseParser::AbbreviationsKWContext::getRuleIndex() const {
  return ChaseParser::RuleAbbreviationsKW;
}

void ChaseParser::AbbreviationsKWContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbbreviationsKW(this);
}

void ChaseParser::AbbreviationsKWContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbbreviationsKW(this);
}

ChaseParser::AbbreviationsKWContext* ChaseParser::abbreviationsKW() {
  AbbreviationsKWContext *_localctx = _tracker.createInstance<AbbreviationsKWContext>(_ctx, getState());
  enterRule(_localctx, 42, ChaseParser::RuleAbbreviationsKW);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(ChaseParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RequirementsKWContext ------------------------------------------------------------------

ChaseParser::RequirementsKWContext::RequirementsKWContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ChaseParser::RequirementsKWContext::getRuleIndex() const {
  return ChaseParser::RuleRequirementsKW;
}

void ChaseParser::RequirementsKWContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequirementsKW(this);
}

void ChaseParser::RequirementsKWContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequirementsKW(this);
}

ChaseParser::RequirementsKWContext* ChaseParser::requirementsKW() {
  RequirementsKWContext *_localctx = _tracker.createInstance<RequirementsKWContext>(_ctx, getState());
  enterRule(_localctx, 44, ChaseParser::RuleRequirementsKW);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(ChaseParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConnectionsKWContext ------------------------------------------------------------------

ChaseParser::ConnectionsKWContext::ConnectionsKWContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ChaseParser::ConnectionsKWContext::getRuleIndex() const {
  return ChaseParser::RuleConnectionsKW;
}

void ChaseParser::ConnectionsKWContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConnectionsKW(this);
}

void ChaseParser::ConnectionsKWContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConnectionsKW(this);
}

ChaseParser::ConnectionsKWContext* ChaseParser::connectionsKW() {
  ConnectionsKWContext *_localctx = _tracker.createInstance<ConnectionsKWContext>(_ctx, getState());
  enterRule(_localctx, 46, ChaseParser::RuleConnectionsKW);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    match(ChaseParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssumptionsKWContext ------------------------------------------------------------------

ChaseParser::AssumptionsKWContext::AssumptionsKWContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ChaseParser::AssumptionsKWContext::getRuleIndex() const {
  return ChaseParser::RuleAssumptionsKW;
}

void ChaseParser::AssumptionsKWContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssumptionsKW(this);
}

void ChaseParser::AssumptionsKWContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssumptionsKW(this);
}

ChaseParser::AssumptionsKWContext* ChaseParser::assumptionsKW() {
  AssumptionsKWContext *_localctx = _tracker.createInstance<AssumptionsKWContext>(_ctx, getState());
  enterRule(_localctx, 48, ChaseParser::RuleAssumptionsKW);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(ChaseParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchedKWContext ------------------------------------------------------------------

ChaseParser::SwitchedKWContext::SwitchedKWContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ChaseParser::SwitchedKWContext::getRuleIndex() const {
  return ChaseParser::RuleSwitchedKW;
}

void ChaseParser::SwitchedKWContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchedKW(this);
}

void ChaseParser::SwitchedKWContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchedKW(this);
}

ChaseParser::SwitchedKWContext* ChaseParser::switchedKW() {
  SwitchedKWContext *_localctx = _tracker.createInstance<SwitchedKWContext>(_ctx, getState());
  enterRule(_localctx, 50, ChaseParser::RuleSwitchedKW);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    match(ChaseParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnswitchedKWContext ------------------------------------------------------------------

ChaseParser::UnswitchedKWContext::UnswitchedKWContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ChaseParser::UnswitchedKWContext::getRuleIndex() const {
  return ChaseParser::RuleUnswitchedKW;
}

void ChaseParser::UnswitchedKWContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnswitchedKW(this);
}

void ChaseParser::UnswitchedKWContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ChaseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnswitchedKW(this);
}

ChaseParser::UnswitchedKWContext* ChaseParser::unswitchedKW() {
  UnswitchedKWContext *_localctx = _tracker.createInstance<UnswitchedKWContext>(_ctx, getState());
  enterRule(_localctx, 52, ChaseParser::RuleUnswitchedKW);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(ChaseParser::T__16);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ChaseParser::_decisionToDFA;
atn::PredictionContextCache ChaseParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ChaseParser::_atn;
std::vector<uint16_t> ChaseParser::_serializedATN;

std::vector<std::string> ChaseParser::_ruleNames = {
  "chaseSpec", "types", "type", "components", "component", "name", "abbreviations", 
  "abbrev", "connections", "switched", "unswitched", "undirected_conn", 
  "directed_conn", "conn", "requirements", "req", "param", "assumptions", 
  "assum", "typesKW", "componentsKW", "abbreviationsKW", "requirementsKW", 
  "connectionsKW", "assumptionsKW", "switchedKW", "unswitchedKW"
};

std::vector<std::string> ChaseParser::_literalNames = {
  "", "':'", "'('", "','", "')'", "'*'", "'--'", "'-'", "'->'", "'>'", "'TYPES'", 
  "'COMPONENTS'", "'ABBREVIATIONS'", "'REQUIREMENTS'", "'CONNECTIONS'", 
  "'ASSUMPTIONS'", "'SWITCHED'", "'UNSWITCHED'", "", "';'"
};

std::vector<std::string> ChaseParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "WS", "ENDST", "ID", "NUMBER", "LINE_COMMENT"
};

dfa::Vocabulary ChaseParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ChaseParser::_tokenNames;

ChaseParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x18, 0xee, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 
    0x1c, 0x9, 0x1c, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x3c, 0xa, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x41, 0xa, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3, 0x47, 0xa, 0x3, 0xd, 0x3, 0xe, 
    0x3, 0x48, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x7, 0x4, 0x52, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x55, 0xb, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x58, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x6, 0x5, 0x5e, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x5f, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x66, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x6, 0x7, 0x6b, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x6c, 0x3, 0x7, 
    0x5, 0x7, 0x70, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 0x74, 0xa, 0x7, 
    0xd, 0x7, 0xe, 0x7, 0x75, 0x5, 0x7, 0x78, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x6, 0x8, 0x7c, 0xa, 0x8, 0xd, 0x8, 0xe, 0x8, 0x7d, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x87, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0x8a, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 
    0x8e, 0xa, 0xa, 0x3, 0xa, 0x6, 0xa, 0x91, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 
    0x92, 0x7, 0xa, 0x95, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x98, 0xb, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x5, 0xd, 0xa9, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x5, 0xe, 0xb6, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0xbd, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 
    0xc1, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0xc2, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xca, 0xa, 0x11, 0xc, 0x11, 0xe, 
    0x11, 0xcd, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0xd4, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x6, 0x13, 0xd8, 
    0xa, 0x13, 0xd, 0x13, 0xe, 0x13, 0xd9, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x2, 0x2, 0x1d, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x2, 
    0x2, 0x2, 0xe9, 0x2, 0x38, 0x3, 0x2, 0x2, 0x2, 0x4, 0x44, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x61, 0x3, 0x2, 0x2, 0x2, 0xc, 0x77, 0x3, 0x2, 0x2, 0x2, 0xe, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x84, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x99, 0x3, 0x2, 0x2, 0x2, 0x16, 0x9e, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xad, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xbe, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x22, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xd5, 0x3, 0x2, 0x2, 0x2, 0x26, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x28, 0xdd, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xe1, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x30, 0xe5, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x34, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x5, 0x4, 0x3, 0x2, 
    0x39, 0x3b, 0x5, 0x8, 0x5, 0x2, 0x3a, 0x3c, 0x5, 0xe, 0x8, 0x2, 0x3b, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x5, 0x12, 0xa, 0x2, 0x3e, 0x40, 0x5, 
    0x1e, 0x10, 0x2, 0x3f, 0x41, 0x5, 0x24, 0x13, 0x2, 0x40, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x43, 0x7, 0x2, 0x2, 0x3, 0x43, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x46, 0x5, 0x28, 0x15, 0x2, 0x45, 0x47, 0x5, 0x6, 0x4, 0x2, 
    0x46, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x5, 0xc, 0x7, 0x2, 0x4b, 0x4c, 0x7, 
    0x3, 0x2, 0x2, 0x4c, 0x57, 0x7, 0x16, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x4, 
    0x2, 0x2, 0x4e, 0x53, 0x7, 0x16, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x5, 0x2, 
    0x2, 0x50, 0x52, 0x7, 0x16, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x55, 0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 0x56, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x58, 0x7, 0x6, 0x2, 0x2, 0x57, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x59, 0x5a, 0x7, 0x15, 0x2, 0x2, 0x5a, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x5d, 0x5, 0x2a, 0x16, 0x2, 0x5c, 0x5e, 0x5, 0xa, 0x6, 0x2, 
    0x5d, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x5, 0xc, 0x7, 0x2, 0x62, 0x65, 0x7, 
    0x3, 0x2, 0x2, 0x63, 0x66, 0x7, 0x17, 0x2, 0x2, 0x64, 0x66, 0x7, 0x7, 
    0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x15, 0x2, 0x2, 
    0x68, 0xb, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6b, 0x7, 0x16, 0x2, 0x2, 0x6a, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x70, 0x7, 0x17, 0x2, 0x2, 0x6f, 0x6e, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x78, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x73, 0x7, 0x17, 0x2, 0x2, 0x72, 0x74, 0x7, 0x16, 0x2, 0x2, 
    0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x77, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0xd, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7b, 0x5, 0x2c, 
    0x17, 0x2, 0x7a, 0x7c, 0x5, 0x10, 0x9, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x80, 0x5, 0xc, 0x7, 0x2, 0x80, 0x81, 0x7, 0x3, 0x2, 0x2, 0x81, 0x82, 
    0x7, 0x16, 0x2, 0x2, 0x82, 0x83, 0x7, 0x15, 0x2, 0x2, 0x83, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x88, 0x5, 0x30, 0x19, 0x2, 0x85, 0x87, 0x5, 0x1c, 
    0xf, 0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x8a, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 
    0x89, 0x96, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x8e, 0x5, 0x14, 0xb, 0x2, 0x8c, 0x8e, 0x5, 0x16, 0xc, 0x2, 0x8d, 0x8b, 
    0x3, 0x2, 0x2, 0x2, 0x8d, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x90, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x91, 0x5, 0x1c, 0xf, 0x2, 0x90, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x95, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x95, 0x98, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x5, 
    0x34, 0x1b, 0x2, 0x9a, 0x9b, 0x7, 0x4, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0xc, 
    0x7, 0x2, 0x9c, 0x9d, 0x7, 0x6, 0x2, 0x2, 0x9d, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x9f, 0x5, 0x36, 0x1c, 0x2, 0x9f, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0xa8, 0x5, 0xc, 0x7, 0x2, 0xa1, 0xa9, 0x7, 0x8, 0x2, 0x2, 0xa2, 
    0xa3, 0x7, 0x9, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0x4, 0x2, 0x2, 0xa4, 0xa5, 
    0x5, 0xc, 0x7, 0x2, 0xa5, 0xa6, 0x7, 0x6, 0x2, 0x2, 0xa6, 0xa7, 0x7, 
    0x9, 0x2, 0x2, 0xa7, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa1, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xab, 0x5, 0xc, 0x7, 0x2, 0xab, 0xac, 0x7, 0x15, 0x2, 0x2, 
    0xac, 0x19, 0x3, 0x2, 0x2, 0x2, 0xad, 0xb5, 0x5, 0xc, 0x7, 0x2, 0xae, 
    0xb6, 0x7, 0xa, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x9, 0x2, 0x2, 0xb0, 0xb1, 
    0x7, 0x4, 0x2, 0x2, 0xb1, 0xb2, 0x5, 0xc, 0x7, 0x2, 0xb2, 0xb3, 0x7, 
    0x6, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0xb, 0x2, 0x2, 0xb4, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x5, 0xc, 0x7, 0x2, 
    0xb8, 0xb9, 0x7, 0x15, 0x2, 0x2, 0xb9, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xba, 
    0xbd, 0x5, 0x1a, 0xe, 0x2, 0xbb, 0xbd, 0x5, 0x18, 0xd, 0x2, 0xbc, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xc0, 0x5, 0x2e, 0x18, 0x2, 0xbf, 0xc1, 0x5, 0x20, 
    0x11, 0x2, 0xc0, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 
    0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x16, 0x2, 0x2, 0xc5, 
    0xc6, 0x7, 0x4, 0x2, 0x2, 0xc6, 0xcb, 0x5, 0x22, 0x12, 0x2, 0xc7, 0xc8, 
    0x7, 0x5, 0x2, 0x2, 0xc8, 0xca, 0x5, 0x22, 0x12, 0x2, 0xc9, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0xca, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x6, 0x2, 0x2, 
    0xcf, 0xd0, 0x7, 0x15, 0x2, 0x2, 0xd0, 0x21, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0xd4, 0x5, 0xc, 0x7, 0x2, 0xd2, 0xd4, 0x7, 0x17, 0x2, 0x2, 0xd3, 0xd1, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd7, 0x5, 0x32, 0x1a, 0x2, 0xd6, 0xd8, 0x5, 0x26, 
    0x14, 0x2, 0xd7, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 
    0x2, 0xd9, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0x25, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x20, 0x11, 0x2, 0xdc, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0xc, 0x2, 0x2, 0xde, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0xd, 0x2, 0x2, 0xe0, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0xe, 0x2, 0x2, 0xe2, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0xe4, 0x7, 0xf, 0x2, 0x2, 0xe4, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0xe5, 0xe6, 0x7, 0x10, 0x2, 0x2, 0xe6, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0xe7, 0xe8, 0x7, 0x11, 0x2, 0x2, 0xe8, 0x33, 0x3, 0x2, 0x2, 0x2, 0xe9, 
    0xea, 0x7, 0x12, 0x2, 0x2, 0xea, 0x35, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 
    0x7, 0x13, 0x2, 0x2, 0xec, 0x37, 0x3, 0x2, 0x2, 0x2, 0x19, 0x3b, 0x40, 
    0x48, 0x53, 0x57, 0x5f, 0x65, 0x6c, 0x6f, 0x75, 0x77, 0x7d, 0x88, 0x8d, 
    0x92, 0x96, 0xa8, 0xb5, 0xbc, 0xc2, 0xcb, 0xd3, 0xd9, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ChaseParser::Initializer ChaseParser::_init;
