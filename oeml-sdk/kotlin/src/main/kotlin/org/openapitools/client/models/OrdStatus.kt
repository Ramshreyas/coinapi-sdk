/**
* OEML - REST API
* This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       
*
* The version of the OpenAPI document: v1
* Contact: support@coinapi.io
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.client.models


import com.squareup.moshi.Json

/**
* Order statuses and the lifecycle are documented in the separate section: <a href=\"#oeml-order-lifecycle\">OEML / Starter Guide / Order Lifecycle</a> 
* Values: rECEIVED,rOUTING,rOUTED,nEW,pENDINGCANCEL,pARTIALLYFILLED,fILLED,cANCELED,rEJECTED
*/


enum class OrdStatus(val value: kotlin.String) {


    @Json(name = "RECEIVED")
    rECEIVED("RECEIVED"),

    @Json(name = "ROUTING")
    rOUTING("ROUTING"),

    @Json(name = "ROUTED")
    rOUTED("ROUTED"),

    @Json(name = "NEW")
    nEW("NEW"),

    @Json(name = "PENDING_CANCEL")
    pENDINGCANCEL("PENDING_CANCEL"),

    @Json(name = "PARTIALLY_FILLED")
    pARTIALLYFILLED("PARTIALLY_FILLED"),

    @Json(name = "FILLED")
    fILLED("FILLED"),

    @Json(name = "CANCELED")
    cANCELED("CANCELED"),

    @Json(name = "REJECTED")
    rEJECTED("REJECTED");


    /**
    This override toString avoids using the enum var name and uses the actual api value instead.
    In cases the var name and value are different, the client would send incorrect enums to the server.
    **/
    override fun toString(): String {
        return value
    }
}

