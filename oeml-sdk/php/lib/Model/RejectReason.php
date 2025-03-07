<?php
/**
 * RejectReason
 *
 * PHP version 7.2
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * OEML - REST API
 *
 * This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 5.2.0
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace OpenAPI\Client\Model;
use \OpenAPI\Client\ObjectSerializer;

/**
 * RejectReason Class Doc Comment
 *
 * @category Class
 * @description Cause of rejection.
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class RejectReason
{
    /**
     * Possible values of this enum
     */
    const OTHER = 'OTHER';
    const EXCHANGE_UNREACHABLE = 'EXCHANGE_UNREACHABLE';
    const EXCHANGE_RESPONSE_TIMEOUT = 'EXCHANGE_RESPONSE_TIMEOUT';
    const ORDER_ID_NOT_FOUND = 'ORDER_ID_NOT_FOUND';
    const INVALID_TYPE = 'INVALID_TYPE';
    const METHOD_NOT_SUPPORTED = 'METHOD_NOT_SUPPORTED';
    const JSON_ERROR = 'JSON_ERROR';
    
    /**
     * Gets allowable values of the enum
     * @return string[]
     */
    public static function getAllowableEnumValues()
    {
        return [
            self::OTHER,
            self::EXCHANGE_UNREACHABLE,
            self::EXCHANGE_RESPONSE_TIMEOUT,
            self::ORDER_ID_NOT_FOUND,
            self::INVALID_TYPE,
            self::METHOD_NOT_SUPPORTED,
            self::JSON_ERROR,
        ];
    }
}


