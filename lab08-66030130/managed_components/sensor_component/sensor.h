#ifndef SENSOR_H
#define SENSOR_H
//
#ifdef __cplusplus
extern "C"
{
#endif

    /**
     * @brief Initialize sensor module
     */
    void sensor_init(void);

    /**
     * @brief Read data from sensors
     */
    void sensor_read_data(void);

    /**
     * @brief Check sensor status
     */
    void sensor_check_status(void);

    /**
     * @brief Get temperature reading
     * @return Temperature value in degrees Celsius
     */
    float read_temperature(void); // <-- เพิ่มบรรทัดนี้

    /**
     * @brief Get humidity reading
     * @return Humidity value in percent
     */
    float read_humidity(void); // <-- เพิ่มบรรทัดนี้

    /**
     * @brief Read temperature from sensor (convenience function)
     * @return Temperature value in degrees Celsius
     */
    float sensor_read_temperature(void);

    /**
     * @brief Read humidity from sensor (convenience function)
     * @return Humidity value in percent
     */
    float sensor_read_humidity(void);

#ifdef __cplusplus
}
#endif

#endif // SENSOR_H