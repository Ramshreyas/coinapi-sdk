=begin
#OEML - REST API

#This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       

The version of the OpenAPI document: v1
Contact: support@coinapi.io
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.2.0

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for OpenapiClient::OrderCancelAllRequest
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::OrderCancelAllRequest do
  let(:instance) { OpenapiClient::OrderCancelAllRequest.new }

  describe 'test an instance of OrderCancelAllRequest' do
    it 'should create an instance of OrderCancelAllRequest' do
      expect(instance).to be_instance_of(OpenapiClient::OrderCancelAllRequest)
    end
  end
  describe 'test attribute "exchange_id"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
