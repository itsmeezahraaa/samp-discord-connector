// Button.cpp
#include "Button.hpp"

Button::Button(const std::string& custom_id, const std::string& label, int style)
    : custom_id(custom_id), label(label), style(style) {}

nlohmann::json Button::ToJson() const {
    return {
        {"type", 2},
        {"style", style},
        {"label", label},
        {"custom_id", custom_id}
    };
