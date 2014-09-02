<?php
/**
 * @file
 * plupload_recline_dkan.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function plupload_recline_dkan_field_default_field_instances_alter(&$data) {
  if (isset($data['node-resource-field_upload'])) {
    $data['node-resource-field_upload']['settings']['max_filesize'] = '10000 MB'; /* WAS: '' */
    $data['node-resource-field_upload']['widget']['settings']['filefield_sources'] = array(
      'filefield_sources' => array(
        'attach' => 0,
        'clipboard' => 0,
        'plupload' => 'plupload',
        'reference' => 0,
        'remote' => 0,
        'remotefile' => 0,
        'upload' => 0,
      ),
    ); /* WAS: '' */
  }
}
