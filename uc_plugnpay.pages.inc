<?php

/**
 * @file
 * plugnpay Response pages.
 *
 */

 /**
 * Callback function to handle successful payment.
 */
function uc_plugnpay_return_callback() {

  // Retrieve query parameters from PlugnPay
  $response = $_GET;
  print_r($response);

  // If the order ID specified in the return URL is not the same as the one in
  // the user's session, we need to assume this is either a spoof or that the
  // user tried to adjust the order on this side while at PayPal. If it was a
  // legitimate checkout, the IPN will still come in from PayPal so the order
  // gets processed correctly. We'll leave an ambiguous message just in case.
  if (!isset($_SESSION['cart_order']) || intval($_SESSION['cart_order']) != $order->order_id) {
  
    // Update the order status to 'payment received' or an appropriate status.
    uc_order_update_status($order_id, 'payment_received');

    // Display a success message to the user.
    drupal_set_message(t('Payment was successful. Thank you for your purchase!'));

    // Redirect to the order completion page.
    drupal_goto('cart/checkout/complete');
  }

  // Redirect to the order completion page.
  drupal_goto('cart/');


}

