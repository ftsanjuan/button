<?php

/**
 * @file
 * Provides integration of Button with rules.
 */

function button_rules_event_info() {
  return array(
    'button_click' => array(
      'label' => t('After clicking the button'),
      'variables' => array(
        'user' => array(
          'type' => 'user',
          'label' => t('User')
        ),
      ),
      'group' => t('Button'),
    ),
  );
}