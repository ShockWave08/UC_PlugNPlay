<?php

/**
 * @file
 * plugnpay Response pages.
 *
 */


/** 
 * Callback function to process successful response.
*/
function uc_plugnpay_success() {}

 /** 
  * Callback function to process badcard response.
 */
 function uc_plugnpay_badcard() {}

/** 
 * Callback function to process problematic response.
*/
function uc_plugnpay_problem() {}

/** 
 * Callback function to process fraudulent detection.
*/
 function uc_plugnpay_fraud() {}


/**
 * Handles the payment return from PlugnPay.
*/
function uc_plugnpay_complete() {
  // Retrieve response parameters.
  $response = drupal_get_query_parameters();

  // Verify the response (e.g., check for a valid signature if applicable).
  print_r($response);

  // Load the order using the order ID from the response.
  $order_id = $response['orderID'];
  $order = uc_order_load($order_id);

  if ($order) {
    // Update order status to 'payment received' or equivalent.
    uc_order_payment_enter($order_id, 'plugnpay', $response['amount'], $response['transactionID'], $response);

    // Redirect to the order completion page.
    drupal_goto('cart/checkout/complete');
  } else {
    // Handle the case where the order is not found.
    watchdog('uc_plugnpay', 'Order ID @order_id not found in PlugNPay response.', array('@order_id' => $order_id), WATCHDOG_ERROR);
    drupal_goto('cart');
  }
}

