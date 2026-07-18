#pragma once

#include <string>

class LuaManager
{
public:
    bool Initialize();

    bool RunScript(
        const std::string& file);

    void Shutdown();
};
