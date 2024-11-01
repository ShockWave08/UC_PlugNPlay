<?php

/**
 * Form builder for PlugNPay admin configuration.
 */
function uc_plugnplay_admin_form($form, &$form_state) {
  $settings = variable_get('uc_plugnplay_settings', array());

  $form['publisher_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Publisher Name'),
    '#default_value' => isset($settings['publisher_name']) ? $settings['publisher_name'] : '',
    '#required' => TRUE,
  );

  $form['publisher_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Publisher Email'),
    '#default_value' => isset($settings['publisher_email']) ? $settings['publisher_email'] : '',
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
