/**
* OMS - REST API ...@
* OMS Project
*
* The version of the OpenAPI document: v1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.client.models


import com.squareup.moshi.Json
/**
 * 
 * @param type Type of message
 * @param exchangeId Exchange name
 * @param errorMessage Error message
 */

data class MessagesInfo (
    /* Type of message */
    @Json(name = "type")
    val type: kotlin.String? = null,
    /* Exchange name */
    @Json(name = "exchange_id")
    val exchangeId: kotlin.String? = null,
    /* Error message */
    @Json(name = "error_message")
    val errorMessage: kotlin.String? = null
)

