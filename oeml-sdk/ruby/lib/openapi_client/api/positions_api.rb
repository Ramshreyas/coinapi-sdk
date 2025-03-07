=begin
#OEML - REST API

#This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       

The version of the OpenAPI document: v1
Contact: support@coinapi.io
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.2.0

=end

require 'cgi'

module OpenapiClient
  class PositionsApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Get open positions
    # Get current open positions across all or single exchange.
    # @param [Hash] opts the optional parameters
    # @option opts [String] :exchange_id Filter the balances to the specific exchange.
    # @return [Array<Position>]
    def v1_positions_get(opts = {})
      data, _status_code, _headers = v1_positions_get_with_http_info(opts)
      data
    end

    # Get open positions
    # Get current open positions across all or single exchange.
    # @param [Hash] opts the optional parameters
    # @option opts [String] :exchange_id Filter the balances to the specific exchange.
    # @return [Array<(Array<Position>, Integer, Hash)>] Array<Position> data, response status code and response headers
    def v1_positions_get_with_http_info(opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: PositionsApi.v1_positions_get ...'
      end
      # resource path
      local_var_path = '/v1/positions'

      # query parameters
      query_params = opts[:query_params] || {}
      query_params[:'exchange_id'] = opts[:'exchange_id'] if !opts[:'exchange_id'].nil?

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json', 'appliction/json'])

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'Array<Position>'

      # auth_names
      auth_names = opts[:debug_auth_names] || []

      new_options = opts.merge(
        :operation => :"PositionsApi.v1_positions_get",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: PositionsApi#v1_positions_get\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
