<?php

/**
 * Class PlugNPay Handles Gateway transactions
 */

 class PlugNPay {
    
   /**
    * @var string Payment URL
    */
   protected $apiURL;

   /**
    * @var string
    */
   protected $account_Name;

   /**
    * @var string
    */
   protected $account_Password;

   /**
    * @var string
    */
   protected $transaction_Mode;

   /**
    * @var string
    */
   protected $transaction_Currency;

   /**
    * @var string
    */
   protected $order_ID;

   /**
    * @var string
   */
   protected $order_Amount;

   /**
    * @var string
    */
   protected $inbound_Hash;

   /**@var string
    * 
    */
   protected $outbound_Hash;  


   /**
    * Class Constructor
    *
    * @param $account_Name
    *    Account Name
    * @param $account_Password
    *    Account Password
    * @param $transaction_Mode
    *    Transaction Mode
    * @param $transaction_Currency
    *    Transaction Currency
    * @param $order_ID
    *    Order ID
    * @param $order_Amount
    *    Order Amount
    */
   function __construct($account_Name, $account_Password, $transaction_Currency, $transaction_Mode, $order_ID, $order_Amount) {
      $this->account_Name = $account_Name;
      $this->account_Password = $account_Password;
      $this->transaction_Currency = $transaction_Currency;
      $this->transaction_Mode = $transaction_Mode;
      $this->order_ID = $order_ID;
      $this->order_Amount = $order_Amount;
   }


 }