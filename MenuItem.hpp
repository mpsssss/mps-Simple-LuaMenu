#pragma once

#include <functional>
#include <string>

class MenuItem
{
public:
    MenuItem(
        std::string text,
        std::function<void()> callback);

    void Execute();

    const std::string& GetText() const;

private:
    std::string m_Text;
    std::function<void()> m_Callback;
};
