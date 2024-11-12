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
    drupal_goto('/');
  }
