#pragma once

#include <string>
#include <vector>
#include <map>
#include <memory>
#include <iostream>

namespace arbitrage {

// Common types and constants
using PriceType = double;
using QuantityType = double;
using OrderId = std::string;

// Error handling
enum class ErrorCode {
    OK,
    NETWORK_ERROR,
    AUTH_ERROR,
    INVALID_PARAMETER,
    INTERNAL_ERROR,
    UNKNOWN_ERROR
};

struct Result {
    ErrorCode code = ErrorCode::OK;
    std::string message;
    
    bool isSuccess() const { return code == ErrorCode::OK; }
    
    static Result success() { return Result{ErrorCode::OK, ""}; }
    static Result error(ErrorCode code, const std::string& msg) { 
        return Result{code, msg}; 
    }
};

} // namespace arbitrage 