/*
 * Copyright (C) 2022 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <map>
#include <vector>
#pragma once
/**
 * ! Do not edit this file directly !
 *
 * Generated automatically from vndk_camera_metadata_tags.mako. To be included in libcameraservice
 * only by aidl/AidlUtils.cpp.
 */

/**
 * API level to static keys mapping. To be used for filtering out keys depending on vndk version
 * used by vendor clients.
 */
std::map<int, std::vector<camera_metadata_tag>> static_api_level_to_keys{
      {30, {
          ANDROID_CONTROL_AVAILABLE_EXTENDED_SCENE_MODE_MAX_SIZES,
          ANDROID_CONTROL_AVAILABLE_EXTENDED_SCENE_MODE_ZOOM_RATIO_RANGES,
          ANDROID_CONTROL_ZOOM_RATIO_RANGE,
          ANDROID_SCALER_AVAILABLE_ROTATE_AND_CROP_MODES,
        } },
      {31, {
          ANDROID_CONTROL_AVAILABLE_HIGH_SPEED_VIDEO_CONFIGURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_DEPTH_AVAILABLE_DEPTH_MIN_FRAME_DURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_DEPTH_AVAILABLE_DEPTH_STALL_DURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_DEPTH_AVAILABLE_DEPTH_STREAM_CONFIGURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_DEPTH_AVAILABLE_DYNAMIC_DEPTH_MIN_FRAME_DURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_DEPTH_AVAILABLE_DYNAMIC_DEPTH_STALL_DURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_DEPTH_AVAILABLE_DYNAMIC_DEPTH_STREAM_CONFIGURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_HEIC_AVAILABLE_HEIC_MIN_FRAME_DURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_HEIC_AVAILABLE_HEIC_STALL_DURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_HEIC_AVAILABLE_HEIC_STREAM_CONFIGURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_LENS_DISTORTION_MAXIMUM_RESOLUTION,
          ANDROID_LENS_INTRINSIC_CALIBRATION_MAXIMUM_RESOLUTION,
          ANDROID_SCALER_AVAILABLE_INPUT_OUTPUT_FORMATS_MAP_MAXIMUM_RESOLUTION,
          ANDROID_SCALER_AVAILABLE_MIN_FRAME_DURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_SCALER_AVAILABLE_STALL_DURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_SCALER_AVAILABLE_STREAM_CONFIGURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_SCALER_DEFAULT_SECURE_IMAGE_SIZE,
          ANDROID_SCALER_MULTI_RESOLUTION_STREAM_SUPPORTED,
          ANDROID_SCALER_PHYSICAL_CAMERA_MULTI_RESOLUTION_STREAM_CONFIGURATIONS,
          ANDROID_SENSOR_INFO_ACTIVE_ARRAY_SIZE_MAXIMUM_RESOLUTION,
          ANDROID_SENSOR_INFO_BINNING_FACTOR,
          ANDROID_SENSOR_INFO_PIXEL_ARRAY_SIZE_MAXIMUM_RESOLUTION,
          ANDROID_SENSOR_INFO_PRE_CORRECTION_ACTIVE_ARRAY_SIZE_MAXIMUM_RESOLUTION,
          ANDROID_SENSOR_OPAQUE_RAW_SIZE_MAXIMUM_RESOLUTION,
        } },
      {32, {
          ANDROID_INFO_DEVICE_STATE_ORIENTATIONS,
        } },
      {33, {
          ANDROID_AUTOMOTIVE_LENS_FACING,
          ANDROID_AUTOMOTIVE_LOCATION,
          ANDROID_FLASH_INFO_STRENGTH_DEFAULT_LEVEL,
          ANDROID_FLASH_INFO_STRENGTH_MAXIMUM_LEVEL,
          ANDROID_REQUEST_AVAILABLE_DYNAMIC_RANGE_PROFILES_MAP,
          ANDROID_REQUEST_RECOMMENDED_TEN_BIT_DYNAMIC_RANGE_PROFILE,
          ANDROID_SCALER_AVAILABLE_STREAM_USE_CASES,
          ANDROID_SENSOR_READOUT_TIMESTAMP,
        } },
      {34, {
          ANDROID_CONTROL_AUTOFRAMING_AVAILABLE,
          ANDROID_CONTROL_AVAILABLE_SETTINGS_OVERRIDES,
          ANDROID_FLASH_SINGLE_STRENGTH_DEFAULT_LEVEL,
          ANDROID_FLASH_SINGLE_STRENGTH_MAX_LEVEL,
          ANDROID_FLASH_TORCH_STRENGTH_DEFAULT_LEVEL,
          ANDROID_FLASH_TORCH_STRENGTH_MAX_LEVEL,
          ANDROID_JPEGR_AVAILABLE_JPEG_R_MIN_FRAME_DURATIONS,
          ANDROID_JPEGR_AVAILABLE_JPEG_R_MIN_FRAME_DURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_JPEGR_AVAILABLE_JPEG_R_STALL_DURATIONS,
          ANDROID_JPEGR_AVAILABLE_JPEG_R_STALL_DURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_JPEGR_AVAILABLE_JPEG_R_STREAM_CONFIGURATIONS,
          ANDROID_JPEGR_AVAILABLE_JPEG_R_STREAM_CONFIGURATIONS_MAXIMUM_RESOLUTION,
          ANDROID_REQUEST_AVAILABLE_COLOR_SPACE_PROFILES_MAP,
        } },
};

/**
 * API level to dynamic keys mapping. To be used for filtering out keys depending on vndk version
 * used by vendor clients.
 */
std::map<int, std::vector<camera_metadata_tag>> dynamic_api_level_to_keys{
      {30, {
          ANDROID_CONTROL_EXTENDED_SCENE_MODE,
          ANDROID_CONTROL_ZOOM_RATIO,
          ANDROID_SCALER_ROTATE_AND_CROP,
        }  },
      {31, {
          ANDROID_SENSOR_PIXEL_MODE,
          ANDROID_SENSOR_RAW_BINNING_FACTOR_USED,
        }  },
      {34, {
          ANDROID_CONTROL_AUTOFRAMING,
          ANDROID_CONTROL_AUTOFRAMING_STATE,
          ANDROID_CONTROL_SETTINGS_OVERRIDE,
          ANDROID_CONTROL_SETTINGS_OVERRIDING_FRAME_NUMBER,
          ANDROID_EXTENSION_CURRENT_TYPE,
          ANDROID_EXTENSION_STRENGTH,
          ANDROID_FLASH_STRENGTH_LEVEL,
          ANDROID_LOGICAL_MULTI_CAMERA_ACTIVE_PHYSICAL_SENSOR_CROP_REGION,
          ANDROID_SCALER_RAW_CROP_REGION,
          ANDROID_STATISTICS_LENS_INTRINSIC_SAMPLES,
          ANDROID_STATISTICS_LENS_INTRINSIC_TIMESTAMPS,
        }  },
};
