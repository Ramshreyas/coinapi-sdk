/**
 * OMS - REST API ...@
 * OMS Project
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Balance.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Balance::Balance()
{
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Exchange_name = utility::conversions::to_string_t("");
    m_Exchange_nameIsSet = false;
    m_DataIsSet = false;
}

Balance::~Balance()
{
}

void Balance::validate()
{
    // TODO: implement validation
}

web::json::value Balance::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_Exchange_nameIsSet)
    {
        val[utility::conversions::to_string_t("exchange_name")] = ModelBase::toJson(m_Exchange_name);
    }
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(m_Data);
    }

    return val;
}

bool Balance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exchange_name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exchange_name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_exchange_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_exchange_name);
            setExchangeName(refVal_exchange_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Balance_data>> refVal_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_data);
            setData(refVal_data);
        }
    }
    return ok;
}

void Balance::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
    if(m_Exchange_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("exchange_name"), m_Exchange_name));
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("data"), m_Data));
    }
}

bool Balance::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        utility::string_t refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("exchange_name")))
    {
        utility::string_t refVal_exchange_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("exchange_name")), refVal_exchange_name );
        setExchangeName(refVal_exchange_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("data")))
    {
        std::vector<std::shared_ptr<Balance_data>> refVal_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("data")), refVal_data );
        setData(refVal_data);
    }
    return ok;
}

utility::string_t Balance::getType() const
{
    return m_Type;
}

void Balance::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool Balance::typeIsSet() const
{
    return m_TypeIsSet;
}

void Balance::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t Balance::getExchangeName() const
{
    return m_Exchange_name;
}

void Balance::setExchangeName(const utility::string_t& value)
{
    m_Exchange_name = value;
    m_Exchange_nameIsSet = true;
}

bool Balance::exchangeNameIsSet() const
{
    return m_Exchange_nameIsSet;
}

void Balance::unsetExchange_name()
{
    m_Exchange_nameIsSet = false;
}
std::vector<std::shared_ptr<Balance_data>>& Balance::getData()
{
    return m_Data;
}

void Balance::setData(const std::vector<std::shared_ptr<Balance_data>>& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool Balance::dataIsSet() const
{
    return m_DataIsSet;
}

void Balance::unsetData()
{
    m_DataIsSet = false;
}
}
}
}
}


