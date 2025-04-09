# order_refund_add_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**order_id** | **char \*** | Defines the order for which the refund will be created. | [optional] 
**items** | [**list_t**](order_refund_add_items_inner.md) \* | Defines items in the order that will be refunded | [optional] 
**total_price** | **double** | Defines order refund amount. | [optional] 
**shipping_price** | **double** | Defines refund shipping amount. | [optional] 
**fee_price** | **double** | Specifies refund&#39;s fee price | [optional] 
**message** | **char \*** | Refund reason, or some else message which assigned to refund. | [optional] 
**item_restock** | **int** | Boolean, whether or not to add the line items back to the store inventory. | [optional] [default to false]
**send_notifications** | **int** | Send notifications to customer after refund was created | [optional] [default to false]
**date** | **char \*** | Specifies an order creation date in format Y-m-d H:i:s | [optional] 
**is_online** | **int** | Indicates whether refund type is online | [optional] [default to false]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


