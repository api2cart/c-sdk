# product_variant_update_batch_payload_inner_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** |  | 
**product_id** | **char \*** |  | 
**name** | **char \*** |  | [optional] 
**description** | **char \*** |  | [optional] 
**short_description** | **char \*** |  | [optional] 
**sku** | **char \*** |  | [optional] 
**upc** | **char \*** |  | [optional] 
**mpn** | **char \*** |  | [optional] 
**gtin** | **char \*** |  | [optional] 
**isbn** | **char \*** |  | [optional] 
**status** | **char \*** |  | [optional] 
**price** | **double** |  | [optional] 
**special_price** | **double** |  | [optional] 
**cost_price** | **double** |  | [optional] 
**retail_price** | **double** |  | [optional] 
**advanced_prices** | [**list_t**](product_update_batch_payload_inner_advanced_prices_inner.md) \* | If an empty array is passed, all entries will be deleted when the &#39;nested_items_update_behaviour&#39; parameter is set to &#39;replace&#39;. | [optional] 
**quantity** | **double** |  | [optional] 
**reserve_quantity** | **double** |  | [optional] 
**increase_quantity** | **double** |  | [optional] 
**reduce_quantity** | **double** |  | [optional] 
**warehouse_id** | **char \*** |  | [optional] 
**manufacturer_id** | **char \*** |  | [optional] 
**weight** | **double** |  | [optional] 
**height** | **double** |  | [optional] 
**length** | **double** |  | [optional] 
**width** | **double** |  | [optional] 
**store_id** | **char \*** |  | [optional] 
**lang_id** | **char \*** |  | [optional] 
**tax_class_id** | **char \*** |  | [optional] 
**backorder_status** | **char \*** |  | [optional] 
**visible** | **char \*** |  | [optional] 
**is_default** | **int** |  | [optional] 
**in_stock** | **int** |  | [optional] 
**is_virtual** | **int** |  | [optional] 
**downloadable** | **int** |  | [optional] 
**manage_stock** | **int** |  | [optional] 
**is_free_shipping** | **int** |  | [optional] 
**seo_url** | **char \*** |  | [optional] 
**meta_title** | **char \*** |  | [optional] 
**meta_description** | **char \*** |  | [optional] 
**meta_keywords** | **list_t \*** |  | [optional] 
**categories_ids** | **list_t \*** | If an empty array is passed, all entries will be deleted when the &#39;nested_items_update_behaviour&#39; parameter is set to &#39;replace&#39;. | [optional] 
**stores_ids** | **list_t \*** |  | [optional] 
**images** | [**list_t**](product_add_batch_payload_inner_images_inner.md) \* | The passed items will completely replace the original items | [optional] 
**product_images_ids** | **list_t \*** |  | [optional] 
**related_products_ids** | **list_t \*** | If an empty array is passed, all entries will be deleted when the &#39;nested_items_update_behaviour&#39; parameter is set to &#39;replace&#39;. | [optional] 
**up_sell_products_ids** | **list_t \*** | If an empty array is passed, all entries will be deleted when the &#39;nested_items_update_behaviour&#39; parameter is set to &#39;replace&#39;. | [optional] 
**cross_sell_products_ids** | **list_t \*** | If an empty array is passed, all entries will be deleted when the &#39;nested_items_update_behaviour&#39; parameter is set to &#39;replace&#39;. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


