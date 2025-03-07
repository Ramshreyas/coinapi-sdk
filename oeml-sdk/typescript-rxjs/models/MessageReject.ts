// tslint:disable
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

import {
    RejectReason,
} from './';

/**
 * @export
 * @interface MessageReject
 */
export interface MessageReject {
    /**
     * Message type, constant.
     * @type {string}
     * @memberof MessageReject
     */
    type?: string;
    /**
     * @type {RejectReason}
     * @memberof MessageReject
     */
    reject_reason?: RejectReason;
    /**
     * If the message related to exchange, then the identifier of the exchange will be provided.
     * @type {string}
     * @memberof MessageReject
     */
    exchange_id?: string;
    /**
     * Message text.
     * @type {string}
     * @memberof MessageReject
     */
    message?: string;
    /**
     * Value of rejected request, if available.
     * @type {string}
     * @memberof MessageReject
     */
    rejected_message?: string;
}
