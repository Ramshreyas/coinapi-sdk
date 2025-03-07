note
 description:"[
		OEML - REST API
 		This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       
  		The version of the OpenAPI document: v1
 	    Contact: support@coinapi.io

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class REJECT_REASON

feature -- Access

  value: detachable STRING_32
      -- enumerated value.
    note
            option: stable
    attribute
    end

feature -- Enum

 val_other: REJECT_REASON
    once
      create Result
      Result.set_value ("OTHER")
    end

 val_exchange_unreachable: REJECT_REASON
    once
      create Result
      Result.set_value ("EXCHANGE_UNREACHABLE")
    end

 val_exchange_response_timeout: REJECT_REASON
    once
      create Result
      Result.set_value ("EXCHANGE_RESPONSE_TIMEOUT")
    end

 val_order_id_not_found: REJECT_REASON
    once
      create Result
      Result.set_value ("ORDER_ID_NOT_FOUND")
    end

 val_invalid_type: REJECT_REASON
    once
      create Result
      Result.set_value ("INVALID_TYPE")
    end

 val_method_not_supported: REJECT_REASON
    once
      create Result
      Result.set_value ("METHOD_NOT_SUPPORTED")
    end

 val_json_error: REJECT_REASON
    once
      create Result
      Result.set_value ("JSON_ERROR")
    end


feature -- Element Change

  set_value (a_val: like value)
      -- Set `value' with `a_value'.
    do
      value := a_val
    ensure
      value_set: value = a_val
    end


end


