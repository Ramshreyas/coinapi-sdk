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

/*
 * Balance_data.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Balance_data_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Balance_data_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Balance_data
    : public ModelBase
{
public:
    Balance_data();
    virtual ~Balance_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Balance_data members

    /// <summary>
    /// symbol_exchange
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// Currency code.
    /// </summary>
    utility::string_t getSymbolExchange() const;
    bool symbolExchangeIsSet() const;
    void unsetSymbol_exchange();

    void setSymbolExchange(const utility::string_t& value);

    /// <summary>
    /// CoinAPI currency code.
    /// </summary>
    utility::string_t getSymbolCoinapi() const;
    bool symbolCoinapiIsSet() const;
    void unsetSymbol_coinapi();

    void setSymbolCoinapi(const utility::string_t& value);

    /// <summary>
    /// The current balance.
    /// </summary>
    float getBalance() const;
    bool balanceIsSet() const;
    void unsetBalance();

    void setBalance(float value);

    /// <summary>
    /// The amount that is available to trade.
    /// </summary>
    float getAvailable() const;
    bool availableIsSet() const;
    void unsetAvailable();

    void setAvailable(float value);

    /// <summary>
    /// Blocked funds.
    /// </summary>
    float getLocked() const;
    bool lockedIsSet() const;
    void unsetLocked();

    void setLocked(float value);

    /// <summary>
    /// Source of last modification. 
    /// </summary>
    utility::string_t getUpdateOrigin() const;
    bool updateOriginIsSet() const;
    void unsetUpdate_origin();

    void setUpdateOrigin(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Symbol_exchange;
    bool m_Symbol_exchangeIsSet;
    utility::string_t m_Symbol_coinapi;
    bool m_Symbol_coinapiIsSet;
    float m_Balance;
    bool m_BalanceIsSet;
    float m_Available;
    bool m_AvailableIsSet;
    float m_Locked;
    bool m_LockedIsSet;
    utility::string_t m_Update_origin;
    bool m_Update_originIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Balance_data_H_ */
