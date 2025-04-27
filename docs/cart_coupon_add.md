# cart_coupon_add_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**code** | **char \*** | Coupon code | 
**action_type** | **api2cart_openapi_cart_coupon_add_ACTIONTYPE_e** | Coupon discount type | 
**action_apply_to** | **api2cart_openapi_cart_coupon_add_ACTIONAPPLYTO_e** | Defines where discount should be applied | 
**action_scope** | **api2cart_openapi_cart_coupon_add_ACTIONSCOPE_e** | Specify how discount should be applied. If scope&#x3D;matching_items, then discount will be applied to each of the items that match action conditions. Scope order means that discount will be applied once. | 
**action_amount** | **double** | Defines the discount amount value. | 
**codes** | **list_t \*** | Entity codes | [optional] 
**name** | **char \*** | Coupon name | [optional] 
**date_start** | **char \*** | Date start | [optional] [default to 'now']
**date_end** | **char \*** | Defines when discount code will be expired. | [optional] 
**usage_limit** | **int** | Usage limit for coupon. | [optional] 
**usage_limit_per_customer** | **int** | Usage limit per customer. | [optional] 
**action_condition_entity** | **char \*** | Defines entity for action condition. | [optional] 
**action_condition_key** | **char \*** | Defines entity attribute code for action condition. | [optional] 
**action_condition_operator** | **char \*** | Defines condition operator. | [optional] 
**action_condition_value** | **char \*** | Defines condition attribute value/s. Can be comma separated string. | [optional] 
**include_tax** | **int** | Indicates whether to apply a discount for taxes. | [optional] [default to false]
**store_id** | **char \*** | Store Id | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


