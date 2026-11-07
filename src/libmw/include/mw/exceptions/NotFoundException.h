#pragma once

#include <mw/exceptions/DAXSException.h>
#include <mw/util/StringUtil.h>

#define ThrowNotFound(msg) throw NotFoundException(msg, __FUNCTION__)
#define ThrowNotFound_F(msg, ...) throw NotFoundException(StringUtil::Format(msg, __VA_ARGS__), __FUNCTION__)

class NotFoundException : public DAXSException
{
public:
    NotFoundException(const std::string& message, const std::string& function)
        : DAXSException("NotFoundException", message, function)
    {

    }
};