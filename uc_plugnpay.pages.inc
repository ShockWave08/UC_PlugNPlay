<?php

/**
 * @file
 * PlugNPlay Response pages.
 *
 */


/** 
 * Callback function to process successful response.
*/
function uc_plugnplay_success() {}

 /** 
  * Callback function to process badcard response.
 */
 function uc_plugnplay_badcard() {}

/** 
 * Callback function to process problematic response.
*/
function uc_plugnplay_problem() {}

/** 
 * Callback function to process fraudulent detection.
*/
 function uc_plugnplay_fraud() {}


/**
 * Handles the payment return from PlugnPay.
*/
function uc_plugnplay_payment_complete() {
    drupal_goto('/');
  }
