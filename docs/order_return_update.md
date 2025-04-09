# order_return_update_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**return_id** | **char \*** | Return ID | 
**order_id** | **char \*** | Defines the order id | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**item_restock** | **int** | Boolean, whether or not to add the line items back to the store inventory. | [optional] [default to false]
**return_status_id** | **char \*** | Defines return request status | [optional] 
**staff_note** | **char \*** | Specifies staff note | [optional] 
**comment** | **char \*** | Specifies return comment | [optional] 
**send_notifications** | **int** | Send notifications to customer after order was created | [optional] [default to false]
**reject_reason** | **char \*** | Defines return reject reason | [optional] 
**order_products** | [**list_t**](order_return_update_order_products_inner.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


