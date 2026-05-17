const express = require('express');
const noteModel = require('./models/note.model');

const app = express();
app.use(express.json()); // Middleware to parse JSON request bodies

/*
Post/notes => Create a new note
Get/notes => Get all notes
Delete/notes/:id => Delete a note by id
patch/notes/:id => Update a note by id
*/

app.post('/notes', async (req, res) => {

    const data = req.body;
    await noteModel.create({
        title: data.title,
        description: data.description,
    })

    res.status(201).json({
        message: "Note created successfully",
    });

});


app.get('/notes', async (req, res) => {

    const notes = await noteModel.find();

    res.status(200).json({
        message: "Notes fetched successfully",
        notes: notes,
    });
});


app.delete('/notes/:id', async (req, res) => {

    const id = req.params.id;
    await noteModel.findByIdAndDelete(id);

    res.status(200).json({
        message: "Note deleted successfully",
    });
});


app.patch('/notes/:id', async (req, res) => {

    const id = req.params.id;
    const data = req.body;
    await noteModel.findByIdAndUpdate(id, {
        title: data.title,
        description: data.description,
    });

    res.status(200).json({
        message: "Note updated successfully",
    });
});



module.exports = app;

