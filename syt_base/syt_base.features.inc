<?php
/**
 * @file
 * syt_base.features.inc
 */

/**
 * Implements hook_node_info().
 */
function syt_base_node_info() {
  $items = array(
    'syt_base' => array(
      'name' => t('SYT Base'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
