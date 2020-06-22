=begin
#OMS - REST API ...@

#OMS Project

The version of the OpenAPI document: v1

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.1

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for OpenapiClient::CancelAllOrder
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'CancelAllOrder' do
  before do
    # run before each test
    @instance = OpenapiClient::CancelAllOrder.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of CancelAllOrder' do
    it 'should create an instance of CancelAllOrder' do
      expect(@instance).to be_instance_of(OpenapiClient::CancelAllOrder)
    end
  end
  describe 'test attribute "exchange_id"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
