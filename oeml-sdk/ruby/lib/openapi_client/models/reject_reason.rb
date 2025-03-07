=begin
#OEML - REST API

#This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       

The version of the OpenAPI document: v1
Contact: support@coinapi.io
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.2.0

=end

require 'date'
require 'time'

module OpenapiClient
  class RejectReason
    OTHER = "OTHER".freeze
    EXCHANGE_UNREACHABLE = "EXCHANGE_UNREACHABLE".freeze
    EXCHANGE_RESPONSE_TIMEOUT = "EXCHANGE_RESPONSE_TIMEOUT".freeze
    ORDER_ID_NOT_FOUND = "ORDER_ID_NOT_FOUND".freeze
    INVALID_TYPE = "INVALID_TYPE".freeze
    METHOD_NOT_SUPPORTED = "METHOD_NOT_SUPPORTED".freeze
    JSON_ERROR = "JSON_ERROR".freeze

    # Builds the enum from string
    # @param [String] The enum value in the form of the string
    # @return [String] The enum value
    def self.build_from_hash(value)
      new.build_from_hash(value)
    end

    # Builds the enum from string
    # @param [String] The enum value in the form of the string
    # @return [String] The enum value
    def build_from_hash(value)
      constantValues = RejectReason.constants.select { |c| RejectReason::const_get(c) == value }
      raise "Invalid ENUM value #{value} for class #RejectReason" if constantValues.empty?
      value
    end
  end
end
