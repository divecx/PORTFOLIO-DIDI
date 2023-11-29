// Inisialisasi scene, camera, dan renderer
const scene = new THREE.Scene();
const camera = new THREE.PerspectiveCamera(75, window.innerWidth / window.innerHeight, 0.1, 1000);
const renderer = new THREE.WebGLRenderer({ canvas: document.getElementById("canvas") }); // Gunakan canvas dengan id "canvas"
renderer.setSize(window.innerWidth, window.innerHeight);

// Membuat sebuah kubus dengan ukuran 1x1x1
const geometry = new THREE.BoxGeometry();
const material = new THREE.MeshBasicMaterial({ color: 0x00ff00 });
const cube = new THREE.Mesh(geometry, material);
scene.add(cube);

// Mengatur posisi kamera
camera.position.z = 5;

// Fungsi animasi 3D
function animate() {
    requestAnimationFrame(animate);

    // Animasikan objek 3D di sini (misalnya, putar kubus)
    cube.rotation.x += 0.01;
    cube.rotation.y += 0.01;

    renderer.render(scene, camera);
}

// Panggil fungsi animasi untuk pertama kali
animate();


// ... (kode Three.js sebelumnya)

// Variabel untuk menyimpan posisi kursor sebelumnya
let previousMousePosition = {
    x: 0,
    y: 0
};

// Fungsi untuk mengatur posisi objek 3D berdasarkan perubahan posisi kursor
function handleMouseMove(event) {
    const deltaX = event.clientX - previousMousePosition.x;
    const deltaY = event.clientY - previousMousePosition.y;

    // Mengubah rotasi kubus berdasarkan perubahan posisi kursor
    cube.rotation.x += deltaY * 0.01;
    cube.rotation.y += deltaX * 0.01;

    // Mengupdate posisi kursor sebelumnya
    previousMousePosition = {
        x: event.clientX,
        y: event.clientY
    };
}

// Menanggapi perubahan posisi kursor
document.addEventListener('mousemove', handleMouseMove);

// ... (fungsi animasi Three.js dan kode lainnya)
