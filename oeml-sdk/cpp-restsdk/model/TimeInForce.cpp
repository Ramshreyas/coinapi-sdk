/**
 * OEML - REST API
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "TimeInForce.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



TimeInForce::TimeInForce()
{
}

TimeInForce::~TimeInForce()
{
}

void TimeInForce::validate()
{
    // TODO: implement validation
}

web::json::value TimeInForce::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eTimeInForce::TimeInForce_GOOD_TILL_CANCEL) val = web::json::value::string(U(GOOD_TILL_CANCEL));
    if (m_value == eTimeInForce::TimeInForce_GOOD_TILL_TIME_EXCHANGE) val = web::json::value::string(U(GOOD_TILL_TIME_EXCHANGE));
    if (m_value == eTimeInForce::TimeInForce_GOOD_TILL_TIME_OMS) val = web::json::value::string(U(GOOD_TILL_TIME_OMS));
    if (m_value == eTimeInForce::TimeInForce_FILL_OR_KILL) val = web::json::value::string(U(FILL_OR_KILL));
    if (m_value == eTimeInForce::TimeInForce_IMMEDIATE_OR_CANCEL) val = web::json::value::string(U(IMMEDIATE_OR_CANCEL));

    return val;
}

bool TimeInForce::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(GOOD_TILL_CANCEL)) m_value = eTimeInForce::TimeInForce_GOOD_TILL_CANCEL;
    if (s == utility::conversions::to_string_t(GOOD_TILL_TIME_EXCHANGE)) m_value = eTimeInForce::TimeInForce_GOOD_TILL_TIME_EXCHANGE;
    if (s == utility::conversions::to_string_t(GOOD_TILL_TIME_OMS)) m_value = eTimeInForce::TimeInForce_GOOD_TILL_TIME_OMS;
    if (s == utility::conversions::to_string_t(FILL_OR_KILL)) m_value = eTimeInForce::TimeInForce_FILL_OR_KILL;
    if (s == utility::conversions::to_string_t(IMMEDIATE_OR_CANCEL)) m_value = eTimeInForce::TimeInForce_IMMEDIATE_OR_CANCEL;
    return true;
}

void TimeInForce::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eTimeInForce::TimeInForce_GOOD_TILL_CANCEL) s = utility::conversions::to_string_t(GOOD_TILL_CANCEL);
    if (m_value == eTimeInForce::TimeInForce_GOOD_TILL_TIME_EXCHANGE) s = utility::conversions::to_string_t(GOOD_TILL_TIME_EXCHANGE);
    if (m_value == eTimeInForce::TimeInForce_GOOD_TILL_TIME_OMS) s = utility::conversions::to_string_t(GOOD_TILL_TIME_OMS);
    if (m_value == eTimeInForce::TimeInForce_FILL_OR_KILL) s = utility::conversions::to_string_t(FILL_OR_KILL);
    if (m_value == eTimeInForce::TimeInForce_IMMEDIATE_OR_CANCEL) s = utility::conversions::to_string_t(IMMEDIATE_OR_CANCEL);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool TimeInForce::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    {
        utility::string_t s;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), s);
        eTimeInForce v;

        
        if (s == utility::conversions::to_string_t(GOOD_TILL_CANCEL)) v = eTimeInForce::TimeInForce_GOOD_TILL_CANCEL;
        if (s == utility::conversions::to_string_t(GOOD_TILL_TIME_EXCHANGE)) v = eTimeInForce::TimeInForce_GOOD_TILL_TIME_EXCHANGE;
        if (s == utility::conversions::to_string_t(GOOD_TILL_TIME_OMS)) v = eTimeInForce::TimeInForce_GOOD_TILL_TIME_OMS;
        if (s == utility::conversions::to_string_t(FILL_OR_KILL)) v = eTimeInForce::TimeInForce_FILL_OR_KILL;
        if (s == utility::conversions::to_string_t(IMMEDIATE_OR_CANCEL)) v = eTimeInForce::TimeInForce_IMMEDIATE_OR_CANCEL;

        setValue(v);
    }
    return ok;
}

TimeInForce::eTimeInForce TimeInForce::getValue() const
{
   return m_value;
}

void TimeInForce::setValue(TimeInForce::eTimeInForce const value)
{
   m_value = value;
}


}
}
}
}


