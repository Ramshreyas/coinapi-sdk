"""
    OEML - REST API

    This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>         # noqa: E501

    The version of the OpenAPI document: v1
    Contact: support@coinapi.io
    Generated by: https://openapi-generator.tech
"""


import re  # noqa: F401
import sys  # noqa: F401

from openapi_client.api_client import ApiClient, Endpoint as _Endpoint
from openapi_client.model_utils import (  # noqa: F401
    check_allowed_values,
    check_validations,
    date,
    datetime,
    file_type,
    none_type,
    validate_and_convert_types
)
from openapi_client.model.message_reject import MessageReject
from openapi_client.model.order_cancel_all_request import OrderCancelAllRequest
from openapi_client.model.order_cancel_single_request import OrderCancelSingleRequest
from openapi_client.model.order_execution_report import OrderExecutionReport
from openapi_client.model.order_execution_reports import OrderExecutionReports
from openapi_client.model.order_new_single_request import OrderNewSingleRequest
from openapi_client.model.validation_error import ValidationError


class OrdersApi(object):
    """NOTE: This class is auto generated by OpenAPI Generator
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    def __init__(self, api_client=None):
        if api_client is None:
            api_client = ApiClient()
        self.api_client = api_client

        def __v1_orders_cancel_all_post(
            self,
            order_cancel_all_request,
            **kwargs
        ):
            """Cancel all orders request  # noqa: E501

            This request cancels all open orders on single specified exchange.  # noqa: E501
            This method makes a synchronous HTTP request by default. To make an
            asynchronous HTTP request, please pass async_req=True

            >>> thread = api.v1_orders_cancel_all_post(order_cancel_all_request, async_req=True)
            >>> result = thread.get()

            Args:
                order_cancel_all_request (OrderCancelAllRequest): OrderCancelAllRequest object.

            Keyword Args:
                _return_http_data_only (bool): response data without head status
                    code and headers. Default is True.
                _preload_content (bool): if False, the urllib3.HTTPResponse object
                    will be returned without reading/decoding response data.
                    Default is True.
                _request_timeout (int/float/tuple): timeout setting for this request. If
                    one number provided, it will be total request timeout. It can also
                    be a pair (tuple) of (connection, read) timeouts.
                    Default is None.
                _check_input_type (bool): specifies if type checking
                    should be done one the data sent to the server.
                    Default is True.
                _check_return_type (bool): specifies if type checking
                    should be done one the data received from the server.
                    Default is True.
                _host_index (int/None): specifies the index of the server
                    that we want to use.
                    Default is read from the configuration.
                async_req (bool): execute request asynchronously

            Returns:
                MessageReject
                    If the method is called asynchronously, returns the request
                    thread.
            """
            kwargs['async_req'] = kwargs.get(
                'async_req', False
            )
            kwargs['_return_http_data_only'] = kwargs.get(
                '_return_http_data_only', True
            )
            kwargs['_preload_content'] = kwargs.get(
                '_preload_content', True
            )
            kwargs['_request_timeout'] = kwargs.get(
                '_request_timeout', None
            )
            kwargs['_check_input_type'] = kwargs.get(
                '_check_input_type', True
            )
            kwargs['_check_return_type'] = kwargs.get(
                '_check_return_type', True
            )
            kwargs['_host_index'] = kwargs.get('_host_index')
            kwargs['order_cancel_all_request'] = \
                order_cancel_all_request
            return self.call_with_http_info(**kwargs)

        self.v1_orders_cancel_all_post = _Endpoint(
            settings={
                'response_type': (MessageReject,),
                'auth': [],
                'endpoint_path': '/v1/orders/cancel/all',
                'operation_id': 'v1_orders_cancel_all_post',
                'http_method': 'POST',
                'servers': None,
            },
            params_map={
                'all': [
                    'order_cancel_all_request',
                ],
                'required': [
                    'order_cancel_all_request',
                ],
                'nullable': [
                ],
                'enum': [
                ],
                'validation': [
                ]
            },
            root_map={
                'validations': {
                },
                'allowed_values': {
                },
                'openapi_types': {
                    'order_cancel_all_request':
                        (OrderCancelAllRequest,),
                },
                'attribute_map': {
                },
                'location_map': {
                    'order_cancel_all_request': 'body',
                },
                'collection_format_map': {
                }
            },
            headers_map={
                'accept': [
                    'application/json',
                    'appliction/json'
                ],
                'content_type': [
                    'application/json'
                ]
            },
            api_client=api_client,
            callable=__v1_orders_cancel_all_post
        )

        def __v1_orders_cancel_post(
            self,
            order_cancel_single_request,
            **kwargs
        ):
            """Cancel order request  # noqa: E501

            Request cancel for an existing order. The order can be canceled using the `client_order_id` or `exchange_order_id`.  # noqa: E501
            This method makes a synchronous HTTP request by default. To make an
            asynchronous HTTP request, please pass async_req=True

            >>> thread = api.v1_orders_cancel_post(order_cancel_single_request, async_req=True)
            >>> result = thread.get()

            Args:
                order_cancel_single_request (OrderCancelSingleRequest): OrderCancelSingleRequest object.

            Keyword Args:
                _return_http_data_only (bool): response data without head status
                    code and headers. Default is True.
                _preload_content (bool): if False, the urllib3.HTTPResponse object
                    will be returned without reading/decoding response data.
                    Default is True.
                _request_timeout (int/float/tuple): timeout setting for this request. If
                    one number provided, it will be total request timeout. It can also
                    be a pair (tuple) of (connection, read) timeouts.
                    Default is None.
                _check_input_type (bool): specifies if type checking
                    should be done one the data sent to the server.
                    Default is True.
                _check_return_type (bool): specifies if type checking
                    should be done one the data received from the server.
                    Default is True.
                _host_index (int/None): specifies the index of the server
                    that we want to use.
                    Default is read from the configuration.
                async_req (bool): execute request asynchronously

            Returns:
                OrderExecutionReport
                    If the method is called asynchronously, returns the request
                    thread.
            """
            kwargs['async_req'] = kwargs.get(
                'async_req', False
            )
            kwargs['_return_http_data_only'] = kwargs.get(
                '_return_http_data_only', True
            )
            kwargs['_preload_content'] = kwargs.get(
                '_preload_content', True
            )
            kwargs['_request_timeout'] = kwargs.get(
                '_request_timeout', None
            )
            kwargs['_check_input_type'] = kwargs.get(
                '_check_input_type', True
            )
            kwargs['_check_return_type'] = kwargs.get(
                '_check_return_type', True
            )
            kwargs['_host_index'] = kwargs.get('_host_index')
            kwargs['order_cancel_single_request'] = \
                order_cancel_single_request
            return self.call_with_http_info(**kwargs)

        self.v1_orders_cancel_post = _Endpoint(
            settings={
                'response_type': (OrderExecutionReport,),
                'auth': [],
                'endpoint_path': '/v1/orders/cancel',
                'operation_id': 'v1_orders_cancel_post',
                'http_method': 'POST',
                'servers': None,
            },
            params_map={
                'all': [
                    'order_cancel_single_request',
                ],
                'required': [
                    'order_cancel_single_request',
                ],
                'nullable': [
                ],
                'enum': [
                ],
                'validation': [
                ]
            },
            root_map={
                'validations': {
                },
                'allowed_values': {
                },
                'openapi_types': {
                    'order_cancel_single_request':
                        (OrderCancelSingleRequest,),
                },
                'attribute_map': {
                },
                'location_map': {
                    'order_cancel_single_request': 'body',
                },
                'collection_format_map': {
                }
            },
            headers_map={
                'accept': [
                    'application/json',
                    'appliction/json'
                ],
                'content_type': [
                    'application/json'
                ]
            },
            api_client=api_client,
            callable=__v1_orders_cancel_post
        )

        def __v1_orders_get(
            self,
            **kwargs
        ):
            """Get open orders  # noqa: E501

            Get last execution reports for open orders across all or single exchange.  # noqa: E501
            This method makes a synchronous HTTP request by default. To make an
            asynchronous HTTP request, please pass async_req=True

            >>> thread = api.v1_orders_get(async_req=True)
            >>> result = thread.get()


            Keyword Args:
                exchange_id (str): Filter the open orders to the specific exchange.. [optional]
                _return_http_data_only (bool): response data without head status
                    code and headers. Default is True.
                _preload_content (bool): if False, the urllib3.HTTPResponse object
                    will be returned without reading/decoding response data.
                    Default is True.
                _request_timeout (int/float/tuple): timeout setting for this request. If
                    one number provided, it will be total request timeout. It can also
                    be a pair (tuple) of (connection, read) timeouts.
                    Default is None.
                _check_input_type (bool): specifies if type checking
                    should be done one the data sent to the server.
                    Default is True.
                _check_return_type (bool): specifies if type checking
                    should be done one the data received from the server.
                    Default is True.
                _host_index (int/None): specifies the index of the server
                    that we want to use.
                    Default is read from the configuration.
                async_req (bool): execute request asynchronously

            Returns:
                OrderExecutionReports
                    If the method is called asynchronously, returns the request
                    thread.
            """
            kwargs['async_req'] = kwargs.get(
                'async_req', False
            )
            kwargs['_return_http_data_only'] = kwargs.get(
                '_return_http_data_only', True
            )
            kwargs['_preload_content'] = kwargs.get(
                '_preload_content', True
            )
            kwargs['_request_timeout'] = kwargs.get(
                '_request_timeout', None
            )
            kwargs['_check_input_type'] = kwargs.get(
                '_check_input_type', True
            )
            kwargs['_check_return_type'] = kwargs.get(
                '_check_return_type', True
            )
            kwargs['_host_index'] = kwargs.get('_host_index')
            return self.call_with_http_info(**kwargs)

        self.v1_orders_get = _Endpoint(
            settings={
                'response_type': (OrderExecutionReports,),
                'auth': [],
                'endpoint_path': '/v1/orders',
                'operation_id': 'v1_orders_get',
                'http_method': 'GET',
                'servers': None,
            },
            params_map={
                'all': [
                    'exchange_id',
                ],
                'required': [],
                'nullable': [
                ],
                'enum': [
                ],
                'validation': [
                ]
            },
            root_map={
                'validations': {
                },
                'allowed_values': {
                },
                'openapi_types': {
                    'exchange_id':
                        (str,),
                },
                'attribute_map': {
                    'exchange_id': 'exchange_id',
                },
                'location_map': {
                    'exchange_id': 'query',
                },
                'collection_format_map': {
                }
            },
            headers_map={
                'accept': [
                    'application/json',
                    'appliction/json'
                ],
                'content_type': [],
            },
            api_client=api_client,
            callable=__v1_orders_get
        )

        def __v1_orders_post(
            self,
            order_new_single_request,
            **kwargs
        ):
            """Send new order  # noqa: E501

            This request creating new order for the specific exchange.  # noqa: E501
            This method makes a synchronous HTTP request by default. To make an
            asynchronous HTTP request, please pass async_req=True

            >>> thread = api.v1_orders_post(order_new_single_request, async_req=True)
            >>> result = thread.get()

            Args:
                order_new_single_request (OrderNewSingleRequest): OrderNewSingleRequest object.

            Keyword Args:
                _return_http_data_only (bool): response data without head status
                    code and headers. Default is True.
                _preload_content (bool): if False, the urllib3.HTTPResponse object
                    will be returned without reading/decoding response data.
                    Default is True.
                _request_timeout (int/float/tuple): timeout setting for this request. If
                    one number provided, it will be total request timeout. It can also
                    be a pair (tuple) of (connection, read) timeouts.
                    Default is None.
                _check_input_type (bool): specifies if type checking
                    should be done one the data sent to the server.
                    Default is True.
                _check_return_type (bool): specifies if type checking
                    should be done one the data received from the server.
                    Default is True.
                _host_index (int/None): specifies the index of the server
                    that we want to use.
                    Default is read from the configuration.
                async_req (bool): execute request asynchronously

            Returns:
                OrderExecutionReport
                    If the method is called asynchronously, returns the request
                    thread.
            """
            kwargs['async_req'] = kwargs.get(
                'async_req', False
            )
            kwargs['_return_http_data_only'] = kwargs.get(
                '_return_http_data_only', True
            )
            kwargs['_preload_content'] = kwargs.get(
                '_preload_content', True
            )
            kwargs['_request_timeout'] = kwargs.get(
                '_request_timeout', None
            )
            kwargs['_check_input_type'] = kwargs.get(
                '_check_input_type', True
            )
            kwargs['_check_return_type'] = kwargs.get(
                '_check_return_type', True
            )
            kwargs['_host_index'] = kwargs.get('_host_index')
            kwargs['order_new_single_request'] = \
                order_new_single_request
            return self.call_with_http_info(**kwargs)

        self.v1_orders_post = _Endpoint(
            settings={
                'response_type': (OrderExecutionReport,),
                'auth': [],
                'endpoint_path': '/v1/orders',
                'operation_id': 'v1_orders_post',
                'http_method': 'POST',
                'servers': None,
            },
            params_map={
                'all': [
                    'order_new_single_request',
                ],
                'required': [
                    'order_new_single_request',
                ],
                'nullable': [
                ],
                'enum': [
                ],
                'validation': [
                ]
            },
            root_map={
                'validations': {
                },
                'allowed_values': {
                },
                'openapi_types': {
                    'order_new_single_request':
                        (OrderNewSingleRequest,),
                },
                'attribute_map': {
                },
                'location_map': {
                    'order_new_single_request': 'body',
                },
                'collection_format_map': {
                }
            },
            headers_map={
                'accept': [
                    'application/json',
                    'appliction/json'
                ],
                'content_type': [
                    'application/json'
                ]
            },
            api_client=api_client,
            callable=__v1_orders_post
        )

        def __v1_orders_status_client_order_id_get(
            self,
            client_order_id,
            **kwargs
        ):
            """Get order execution report  # noqa: E501

            Get the last order execution report for the specified order. The requested order does not need to be active or opened.  # noqa: E501
            This method makes a synchronous HTTP request by default. To make an
            asynchronous HTTP request, please pass async_req=True

            >>> thread = api.v1_orders_status_client_order_id_get(client_order_id, async_req=True)
            >>> result = thread.get()

            Args:
                client_order_id (str): The unique identifier of the order assigned by the client.

            Keyword Args:
                _return_http_data_only (bool): response data without head status
                    code and headers. Default is True.
                _preload_content (bool): if False, the urllib3.HTTPResponse object
                    will be returned without reading/decoding response data.
                    Default is True.
                _request_timeout (int/float/tuple): timeout setting for this request. If
                    one number provided, it will be total request timeout. It can also
                    be a pair (tuple) of (connection, read) timeouts.
                    Default is None.
                _check_input_type (bool): specifies if type checking
                    should be done one the data sent to the server.
                    Default is True.
                _check_return_type (bool): specifies if type checking
                    should be done one the data received from the server.
                    Default is True.
                _host_index (int/None): specifies the index of the server
                    that we want to use.
                    Default is read from the configuration.
                async_req (bool): execute request asynchronously

            Returns:
                OrderExecutionReport
                    If the method is called asynchronously, returns the request
                    thread.
            """
            kwargs['async_req'] = kwargs.get(
                'async_req', False
            )
            kwargs['_return_http_data_only'] = kwargs.get(
                '_return_http_data_only', True
            )
            kwargs['_preload_content'] = kwargs.get(
                '_preload_content', True
            )
            kwargs['_request_timeout'] = kwargs.get(
                '_request_timeout', None
            )
            kwargs['_check_input_type'] = kwargs.get(
                '_check_input_type', True
            )
            kwargs['_check_return_type'] = kwargs.get(
                '_check_return_type', True
            )
            kwargs['_host_index'] = kwargs.get('_host_index')
            kwargs['client_order_id'] = \
                client_order_id
            return self.call_with_http_info(**kwargs)

        self.v1_orders_status_client_order_id_get = _Endpoint(
            settings={
                'response_type': (OrderExecutionReport,),
                'auth': [],
                'endpoint_path': '/v1/orders/status/{client_order_id}',
                'operation_id': 'v1_orders_status_client_order_id_get',
                'http_method': 'GET',
                'servers': None,
            },
            params_map={
                'all': [
                    'client_order_id',
                ],
                'required': [
                    'client_order_id',
                ],
                'nullable': [
                ],
                'enum': [
                ],
                'validation': [
                ]
            },
            root_map={
                'validations': {
                },
                'allowed_values': {
                },
                'openapi_types': {
                    'client_order_id':
                        (str,),
                },
                'attribute_map': {
                    'client_order_id': 'client_order_id',
                },
                'location_map': {
                    'client_order_id': 'path',
                },
                'collection_format_map': {
                }
            },
            headers_map={
                'accept': [
                    'application/json'
                ],
                'content_type': [],
            },
            api_client=api_client,
            callable=__v1_orders_status_client_order_id_get
        )
