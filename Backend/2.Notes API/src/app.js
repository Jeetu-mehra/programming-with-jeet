//server ko create krna
const express = require('express');

const app = express();
app.use(express.json()); // Middleware to parse JSON bodies

const notes = []; // In-memory array to store notes


app.post('/notes', (req, res) => {
    notes.push(req.body); // Add the new note to the array
    res.status(201).json({ 
        message: 'Note created successfully' 
    }); // Send a response back to the client

})

app.get('/notes', (req, res) => {
    res.status(200).json({
        message: 'Notes retrieved successfully',
        notes: notes
    }); // Send the array of notes as a JSON response
})



module.exports = app;