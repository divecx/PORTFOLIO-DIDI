<?php
class Api_model extends CI_Model {

    private $api_url_proyek = 'http://localhost:8081/proyek';
    private $api_url_lokasi = 'http://localhost:8081/lokasi';

    public function get_all_proyek() {
        $response = file_get_contents($this->api_url_proyek);
        return json_decode($response, true);
    }

    public function get_all_lokasi() {
        $response = file_get_contents($this->api_url_lokasi);
        return json_decode($response, true);
    }

    public function get_proyek_by_id($id) {
        $response = file_get_contents($this->api_url_proyek . '/' . $id);
        return json_decode($response, true);
    }

    public function get_lokasi_by_id($id) {
        $response = file_get_contents($this->api_url_lokasi . '/' . $id);
        return json_decode($response, true);
    }

    public function add_lokasi($data) {
        $json_data = json_encode($data);

        $ch = curl_init($this->api_url_lokasi);
        curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
        curl_setopt($ch, CURLOPT_POST, true);
        curl_setopt($ch, CURLOPT_POSTFIELDS, $json_data);
        curl_setopt($ch, CURLOPT_HTTPHEADER, array('Content-Type: application/json'));

        $response = curl_exec($ch);
        curl_close($ch);

        if (curl_errno($ch)) {
            $error_msg = curl_error($ch);
            log_message('error', 'Curl Error: ' . $error_msg);
        }
        curl_close($ch);

        return $response;
    }

    public function __construct() {
        parent::__construct();
    }
}
