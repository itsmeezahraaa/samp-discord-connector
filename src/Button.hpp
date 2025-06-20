// Button.hpp
#pragma once
#include <string>
#include <nlohmann/json.hpp>

class Button {
public:
    std::string custom_id;
    std::string label;
    int style = 1;

    Button(const std::string& custom_id, const std::string& label, int style = 1);

    nlohmann::json ToJson() const;
};
