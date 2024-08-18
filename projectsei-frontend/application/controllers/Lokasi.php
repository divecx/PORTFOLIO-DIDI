<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Lokasi extends CI_Controller {

    public function __construct() {
        parent::__construct();
        $this->load->model('api_model'); // Pastikan model yang benar dimuat
    }

    public function add() {
        $data = array(
            'namaLokasi' => $this->input->post('namaLokasi'),
            'negara' => $this->input->post('negara'),
            'provinsi' => $this->input->post('provinsi'),
            'kota' => $this->input->post('kota')
        );

        $response = $this->api_model->add_lokasi($data);

        if ($response) {
            redirect('home'); // Redirect ke halaman utama setelah menambahkan lokasi
        } else {
            show_error('Gagal menambahkan lokasi');
        }
    }
}
