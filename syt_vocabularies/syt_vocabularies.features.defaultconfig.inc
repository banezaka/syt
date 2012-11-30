<?php
/**
 * @file
 * syt_vocabularies.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function syt_vocabularies_defaultconfig_features() {
  return array(
    'syt_vocabularies' => array(
      'taxonomy_default_vocabularies' => 'taxonomy_default_vocabularies',
    ),
  );
}

/**
 * Implements hook_defaultconfig_taxonomy_default_vocabularies().
 */
function syt_vocabularies_defaultconfig_taxonomy_default_vocabularies() {
  return array(
    'tag' => array(
      'name' => 'Tag',
      'machine_name' => 'tag',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
