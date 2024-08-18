<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Home extends CI_Controller {

    public function __construct() {
        parent::__construct();
        $this->load->model('Api_model'); // Memuat model untuk API
    }

    public function index() {
        $data['proyek'] = $this->Api_model->get_all_proyek();
        $data['lokasi'] = $this->Api_model->get_all_lokasi();
        $this->load->view('home', $data);
    }

    public function input_proyek() {
        $this->load->view('input_proyek');
    }
    
    public function input_lokasi() {
        $this->load->view('input_lokasi');
    }
}
