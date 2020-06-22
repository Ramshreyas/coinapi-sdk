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
 *
 */

import ApiClient from '../ApiClient';
/**
* Enum class TimeInForce.
* @enum {}
* @readonly
*/
export default class TimeInForce {
    
        /**
         * value: "GOOD_TILL_CANCEL"
         * @const
         */
        "GOOD_TILL_CANCEL" = "GOOD_TILL_CANCEL";

    
        /**
         * value: "GOOD_TILL_TIME_EXCHANGE"
         * @const
         */
        "GOOD_TILL_TIME_EXCHANGE" = "GOOD_TILL_TIME_EXCHANGE";

    
        /**
         * value: "GOOD_TILL_TIME_OMS"
         * @const
         */
        "GOOD_TILL_TIME_OMS" = "GOOD_TILL_TIME_OMS";

    
        /**
         * value: "FILL_OR_KILL"
         * @const
         */
        "FILL_OR_KILL" = "FILL_OR_KILL";

    
        /**
         * value: "IMMEDIATE_OR_CANCEL"
         * @const
         */
        "IMMEDIATE_OR_CANCEL" = "IMMEDIATE_OR_CANCEL";

    
        /**
         * value: "AUCTION_ONLY"
         * @const
         */
        "AUCTION_ONLY" = "AUCTION_ONLY";

    
        /**
         * value: "INDICATION_OF_INTEREST"
         * @const
         */
        "INDICATION_OF_INTEREST" = "INDICATION_OF_INTEREST";

    

    /**
    * Returns a <code>TimeInForce</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/TimeInForce} The enum <code>TimeInForce</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}

