<?php
/**
 * @file
 * stanford_slides.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_slides_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_slide_caption_position|node|stanford_slide|default';
  $field_group->group_name = 'group_s_slide_caption_position';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_slide';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caption Position',
    'weight' => '7',
    'children' => array(
      0 => 'field_s_slide_caption_position_h',
      1 => 'field_s_slide_caption_position_v',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Caption Position',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_slide_caption_position|node|stanford_slide|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_slide_show_settings|node|stanford_slide|form';
  $field_group->group_name = 'group_s_slide_show_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slideshow Settings',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_slide_caption_color',
      1 => 'field_s_slide_caption_position_h',
      2 => 'field_s_slide_caption_position_v',
      3 => 'field_s_slide_category',
      4 => 'field_s_slide_featured',
      5 => 'field_s_slide_weight',
      6 => 'field_s_subsites',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Slideshow Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_slide_show_settings|node|stanford_slide|form'] = $field_group;

  return $export;
}
