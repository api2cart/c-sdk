# order_add_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** | Defines order&#39;s id | [optional] 
**order_id** | **char \*** | Defines the order id if it is supported by the cart | [optional] 
**store_id** | **char \*** | Defines store id where the order should be assigned | [optional] 
**channel_id** | **char \*** | Channel ID | [optional] 
**order_status** | **char \*** | Defines order status. | 
**fulfillment_status** | **char \*** | Create order with fulfillment status | [optional] 
**financial_status** | **char \*** | Create order with financial status | [optional] 
**customer_email** | **char \*** | Defines the customer specified by email for whom order has to be created | 
**customer_first_name** | **char \*** | Specifies customer&#39;s first name | [optional] 
**customer_last_name** | **char \*** | Specifies customer’s last name | [optional] 
**customer_phone** | **char \*** | Specifies customer’s phone | [optional] 
**customer_country** | **char \*** | Specifies customer&#39;s address ISO code or name of country | [optional] 
**customer_birthday** | **char \*** | Specifies customer’s birthday | [optional] 
**customer_fax** | **char \*** | Specifies customer’s fax | [optional] 
**order_payment_method** | **char \*** | Defines order payment method.&lt;br/&gt;Setting order_payment_method on Shopify will also change financial_status field value to &#39;paid&#39; | [optional] 
**transaction_id** | **char \*** | Payment transaction id | [optional] 
**currency** | **char \*** | Currency code of order | [optional] 
**date** | **char \*** | Specifies an order creation date in format Y-m-d H:i:s | [optional] 
**date_modified** | **char \*** | Specifies order&#39;s  modification date | [optional] 
**date_finished** | **char \*** | Specifies order&#39;s  finished date | [optional] 
**bill_first_name** | **char \*** | Specifies billing first name | 
**bill_last_name** | **char \*** | Specifies billing last name | 
**bill_address_1** | **char \*** | Specifies first billing address | 
**bill_address_2** | **char \*** | Specifies second billing address | [optional] 
**bill_city** | **char \*** | Specifies billing city | 
**bill_postcode** | **char \*** | Specifies billing postcode | 
**bill_state** | **char \*** | Specifies billing state code | 
**bill_country** | **char \*** | Specifies billing country code | 
**bill_company** | **char \*** | Specifies billing company | [optional] 
**bill_phone** | **char \*** | Specifies billing phone | [optional] 
**bill_fax** | **char \*** | Specifies billing fax | [optional] 
**shipp_first_name** | **char \*** | Specifies shipping first name | [optional] 
**shipp_last_name** | **char \*** | Specifies shipping last name | [optional] 
**shipp_address_1** | **char \*** | Specifies first shipping address | [optional] 
**shipp_address_2** | **char \*** | Specifies second address line of a shipping street address | [optional] 
**shipp_city** | **char \*** | Specifies shipping city | [optional] 
**shipp_postcode** | **char \*** | Specifies shipping postcode | [optional] 
**shipp_state** | **char \*** | Specifies shipping state code | [optional] 
**shipp_country** | **char \*** | Specifies shipping country code | [optional] 
**shipp_company** | **char \*** | Specifies shipping company | [optional] 
**shipp_phone** | **char \*** | Specifies shipping phone | [optional] 
**shipp_fax** | **char \*** | Specifies shipping fax | [optional] 
**subtotal_price** | **double** | Total price of all ordered products multiplied by their number, excluding tax, shipping price and discounts | [optional] 
**tax_price** | **double** | The value of tax cost for order | [optional] [default to 0]
**total_price** | **double** | Defines order&#39;s total price | [optional] 
**total_paid** | **double** | Defines total paid amount for the order | [optional] 
**total_weight** | **int** | Defines the sum of all line item weights in grams for the order | [optional] 
**prices_inc_tax** | **int** | Indicates whether prices and subtotal includes tax. | [optional] [default to false]
**shipping_price** | **double** | Specifies order&#39;s shipping price | [optional] [default to 0]
**shipping_tax** | **double** | Specifies order&#39;s shipping price tax | [optional] 
**discount** | **double** | Specifies order&#39;s discount | [optional] 
**coupon_discount** | **double** | Specifies order&#39;s coupon discount | [optional] 
**gift_certificate_discount** | **double** | Discounts for order with gift certificates | [optional] 
**order_shipping_method** | **char \*** | Defines order shipping method | [optional] 
**carrier_id** | **char \*** | Defines tracking carrier id | [optional] 
**warehouse_id** | **char \*** | This parameter is used for selecting a warehouse where you need to set/modify a product quantity. | [optional] 
**coupons** | **list_t \*** | Coupons that will be applied to order | [optional] 
**tags** | **char \*** | Order tags | [optional] 
**comment** | **char \*** | Specifies order comment | [optional] 
**admin_comment** | **char \*** | Specifies admin&#39;s order comment | [optional] 
**admin_private_comment** | **char \*** | Specifies private admin&#39;s order comment | [optional] 
**send_notifications** | **int** | Send notifications to customer after order was created | [optional] [default to false]
**send_admin_notifications** | **int** | Notify admin when new order was created. | [optional] [default to false]
**external_source** | **char \*** | Identifying the system used to generate the order | [optional] 
**inventory_behaviour** | **char \*** | The behaviour to use when updating inventory.&lt;hr&gt;&lt;div style&#x3D;\&quot;font-style:normal\&quot;&gt;Values description:&lt;div style&#x3D;\&quot;margin-left: 2%; padding-top: 2%\&quot;&gt;&lt;div style&#x3D;\&quot;font-size:85%\&quot;&gt;&lt;b&gt;bypass&lt;/b&gt; &#x3D; Do not claim inventory &lt;/br&gt;&lt;/br&gt;&lt;b&gt;decrement_ignoring_policy&lt;/b&gt; &#x3D; Ignore the product&#39;s &lt;/br&gt; inventory policy and claim amounts&lt;/br&gt;&lt;/br&gt;&lt;b&gt;decrement_obeying_policy&lt;/b&gt; &#x3D;  Obey the product&#39;s &lt;/br&gt; inventory policy.&lt;/br&gt;&lt;/br&gt;&lt;/div&gt;&lt;/div&gt;&lt;/div&gt; | [optional] [default to 'bypass']
**create_invoice** | **int** | Defines whether the invoice is created automatically along with the order | [optional] [default to false]
**note_attributes** | [**list_t**](order_add_note_attributes_inner.md) \* | Defines note attributes | [optional] 
**clear_cache** | **int** | Is cache clear required | [optional] [default to true]
**origin** | **char \*** | The source of the order | [optional] 
**order_item** | [**list_t**](order_add_order_item_inner.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


