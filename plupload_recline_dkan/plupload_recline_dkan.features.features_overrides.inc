<?php
/**
 * @file
 * plupload_recline_dkan.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function plupload_recline_dkan_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-resource-field_upload.widget|settings|filefield_sources"] = array(
    'filefield_sources' => array(
      'attach' => 0,
      'clipboard' => 0,
      'plupload' => 'plupload',
      'reference' => 0,
      'remote' => 0,
      'remotefile' => 0,
      'upload' => 0,
    ),
  );

 return $overrides;
}
