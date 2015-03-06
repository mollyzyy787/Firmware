/*
 * aa241x_mission_params.c
 *
 *  Created on: Feb 22, 2015
 *      Author: Adrien
 */


#include <nuttx/config.h>
#include <systemlib/param/param.h>

/**
 * Minimum allowed altitude during mission in [m] above Lake Lag.
 * Also acts at the mission start threshold altitude.
 *
 * @unit meters
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_ALT_MIN, 30.48f);

/**
 * Maximum allowed altitude during mission  in [m] above Lake Lag.
 *
 * @unit meters
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_ALT_MAX, 121.92f);

/**
 * Maximum allowed radial distance in [m] from the center of the lake.
 *
 * @unit meters
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_RAD_MAX, 150.0f);

/**
 * Width of a grid cell in [m].
 *
 * @unit meters
 * @min 0
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_CELL_W, 20.0f);


/**
 * Altitude in [m] by which autopilot needs to be engaged in order
 * to be eligible for a mission start.
 *
 * @unit meters
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_ALT_AUTO, 15.24f);

/**
 * Total duration in [mins] that the fire will spread for once
 * mission clock starts.
 *
 * @unit minutes
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_DURATION, 2.0f);

/**
 * Timestep in [sec] for each propagation of the fire.
 *
 * @unit seconds
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_TSTEP, 5.0f);

/**
 * Standard deviation for fire propagation.
 *
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_STD, 0.25f);

/**
 * Minimum time in [sec] required between successive pictures.
 *
 * @min 0
 * @unit seconds
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_TPIC, 3.0f);

/**
 * Minimum camera field of view diameter in [m].
 *
 * @unit meters
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_FOV_MIN, 30.0f);

/**
 * Maximum camera field of view diameter in [m].
 *
 * @unit meters
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_FOV_MAX, 60.0f);

/**
 * Grams of water per drop.
 *
 * @unit grams/drop
 * @min 0
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_WGHT_DRP, 5.0f);

/**
 * Origin latitude for local position.
 *
 * Latitude in decimal degrees for the origin of the local position estimate.
 * A value outside of the min/max will result in using the home location
 * latitude.
 *
 * @min -90.0
 * @max 90.0
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_CTR_LAT, 37.4224444f);

/**
 * Origin longitude for local position.
 *
 * Longitude in decimal degrees for the origin of the local position estimate.
 * A value outside of the min/max will result in using the home location
 * longitude.
 *
 * @min -180.0
 * @max 180.0
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_CTR_LON, -122.1760917f);

/**
 * Origin altitude for local position.
 *
 * Altitude in meters for the origin of the local position estimate.
 * A negative value will result in using the home location altitude.
 *
 * @min 0.0
 * @group AA241x Mission
 */
PARAM_DEFINE_FLOAT(AAMIS_CTR_ALT, 40.0f);
