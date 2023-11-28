document.getElementById('myButton').addEventListener('click', function() {
    console.log("hello world");
    fetch('http://localhost:9000/signup') // Replace with your endpoint
        .then(response => {
            if (!response.ok) {
                throw new Error('Network response was not ok ' + response.statusText);
            }
            return response.json();
        })
        .then(data => {
            console.log('Success:', data);
            // You can also update the UI with this data
        })
        .catch(error => {
            console.error('There was a problem with your fetch operation:', error);
        });
});