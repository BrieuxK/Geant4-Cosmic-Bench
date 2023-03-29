#!/usr/bin/env python
# coding: utf-8

# In[ ]:


get_ipython().system('pip install --yes iminuit')
get_ipython().system('pip install --yes tensorflow')
get_ipython().system('pip install --yes sklearn')


# In[7]:


import numpy as np
import scipy as sc
import iminuit       #régression, méthode du max de vraisemblance, etc
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns    #graphs pour stats (plot de régressions, plus "visuel" que pyplot)
import timeit 

#Machine learning 

#import tensorflow as tf   #pas forcément utile ===> Plutôt axé "IA" (reco image, etc...), à la limite pour de l'analyse de tracks
import sklearn   #Clustering principalement


# ### Ouverture des fichiers 

# In[ ]:


file = pd.read_csv("path.txt", sep=" ")

