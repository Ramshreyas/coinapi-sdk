/*
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


package org.openapitools.client.api;

import org.openapitools.client.ApiException;
import org.openapitools.client.model.Balance;
import org.openapitools.client.model.MessageReject;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for BalancesApi
 */
@Ignore
public class BalancesApiTest {

    private final BalancesApi api = new BalancesApi();

    
    /**
     * Get balances
     *
     * Get current currency balance from all or single exchange.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void v1BalancesGetTest() throws ApiException {
        String exchangeId = null;
        List<Balance> response = api.v1BalancesGet(exchangeId);

        // TODO: test validations
    }
    
}
