#pragma once

#include <string>

struct TokenProvider {
    virtual const std::string token() = 0;
};

enum TagDefault {
    tdExplicit,
    tdImplicit,
    tdAutomatic,
    tdNone
};

enum ExtensionDefault {
    edExtensibilityImplied,
    edNone
};

struct ModuleDefinition {
    std::string module_reference_;
    //ModuleIdentifier moduleIdentifier;
    TagDefault tagDefault;
    ExtensionDefault extensionDefault;
    
    // std::vector<DefinitiveObjIdComponent> objId;

    // std::vector<Assignment> assignments;

    static ModuleDefinition fromTokenProvider(TokenProvider& tokenProvider);
};