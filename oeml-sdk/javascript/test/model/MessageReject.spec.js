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
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', process.cwd()+'/src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require(process.cwd()+'/src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.OemlRestApi);
  }
}(this, function(expect, OemlRestApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new OemlRestApi.MessageReject();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('MessageReject', function() {
    it('should create an instance of MessageReject', function() {
      // uncomment below and update the code to test MessageReject
      //var instane = new OemlRestApi.MessageReject();
      //expect(instance).to.be.a(OemlRestApi.MessageReject);
    });

    it('should have the property type (base name: "type")', function() {
      // uncomment below and update the code to test the property type
      //var instance = new OemlRestApi.MessageReject();
      //expect(instance).to.be();
    });

    it('should have the property rejectReason (base name: "reject_reason")', function() {
      // uncomment below and update the code to test the property rejectReason
      //var instance = new OemlRestApi.MessageReject();
      //expect(instance).to.be();
    });

    it('should have the property exchangeId (base name: "exchange_id")', function() {
      // uncomment below and update the code to test the property exchangeId
      //var instance = new OemlRestApi.MessageReject();
      //expect(instance).to.be();
    });

    it('should have the property message (base name: "message")', function() {
      // uncomment below and update the code to test the property message
      //var instance = new OemlRestApi.MessageReject();
      //expect(instance).to.be();
    });

    it('should have the property rejectedMessage (base name: "rejected_message")', function() {
      // uncomment below and update the code to test the property rejectedMessage
      //var instance = new OemlRestApi.MessageReject();
      //expect(instance).to.be();
    });

  });

}));
