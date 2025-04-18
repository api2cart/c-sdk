# order_shipment_update_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**store_id** | **char \*** | Store Id | [optional] 
**shipment_id** | **char \*** | Shipment id indicates the number of delivery | 
**order_id** | **char \*** | Defines the order that will be updated | [optional] 
**tracking_numbers** | [**list_t**](order_shipment_add_tracking_numbers_inner.md) \* | Defines shipment&#39;s tracking numbers that have to be added&lt;/br&gt; How set tracking numbers to appropriate carrier:&lt;ul&gt;&lt;li&gt;tracking_numbers[]&#x3D;a2c.demo1,a2c.demo2 - set default carrier&lt;/li&gt;&lt;li&gt;tracking_numbers[&lt;b&gt;carrier_id&lt;/b&gt;]&#x3D;a2c.demo - set appropriate carrier&lt;/li&gt;&lt;/ul&gt;To get the list of carriers IDs that are available in your store, use the &lt;a href &#x3D; \&quot;https://api2cart.com/docs/#/cart/CartInfo\&quot;&gt;cart.info&lt;/a &gt; method | [optional] 
**replace** | **int** | Allows rewrite tracking numbers | [optional] [default to true]
**is_shipped** | **int** | Defines shipment&#39;s status | [optional] [default to true]
**tracking_link** | **char \*** | Defines custom tracking link | [optional] 
**delivered_at** | **char \*** | Defines the date of delivery | [optional] 
**shipment_provider** | **char \*** | Defines company name that provide tracking of shipment | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


